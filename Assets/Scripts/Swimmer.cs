using UnityEngine;
using UnityEngine.InputSystem;
using System.Collections.Generic;
using System.Collections;

[RequireComponent(typeof(Rigidbody))]
public class Swimmer : MonoBehaviour
{
    [Header("Values")]
    [SerializeField] private float swimForce = 2f;
    [SerializeField] private float dragForce = 1f;
    [SerializeField] private float minForce;
    [SerializeField] private float minTimeBetweenStrokes;
    [Header("Reference")]
    [SerializeField] InputActionReference leftControllerSwimReference;
    [SerializeField] InputActionReference leftControllerVelocity;
    [SerializeField] InputActionReference rightControllerSwimReference;
    [SerializeField] InputActionReference rightControllerVelocity;
    [SerializeField] Transform trackingReference;

    [SerializeField] private List<Collider> handColliders;
    [SerializeField] private List<Collider> groundColliders;

    Rigidbody _rigidbody;
    float _cooldownTimer;

    private void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
    }
    private void FixedUpdate()
    {
        _cooldownTimer += Time.fixedDeltaTime;

        if(_cooldownTimer > minTimeBetweenStrokes
            && leftControllerSwimReference.action.IsPressed()
            && rightControllerSwimReference.action.IsPressed())
        {
            var leftHandVelocity = leftControllerVelocity.action.ReadValue<Vector3>();
            var rightHandVelocity = rightControllerVelocity.action.ReadValue<Vector3>();
            Vector3 loaclVelocity = leftHandVelocity + rightHandVelocity;
            loaclVelocity *= -1;

            ForvardForce(loaclVelocity);
            RevertForce();
        }
    }

    private void ForvardForce(Vector3 loaclVelocity)
    {
        if (loaclVelocity.sqrMagnitude > minForce * minForce)
        {
            Vector3 worldVelocity = trackingReference.TransformDirection(loaclVelocity);
            _rigidbody.AddForce(worldVelocity * swimForce, ForceMode.Acceleration);
            _cooldownTimer = 0f;
        }
    }

    private void RevertForce()
    {
        if (_rigidbody.velocity.sqrMagnitude > 0.01f)
        {
            _rigidbody.AddForce(-_rigidbody.velocity * dragForce, ForceMode.Acceleration);
        }
    }
}
