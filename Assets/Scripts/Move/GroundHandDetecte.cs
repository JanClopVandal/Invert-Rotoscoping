using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(Collider))]
public class GroundHandDetecte : MonoBehaviour
{
    [SerializeField] private Swimmer swimmer;
    [SerializeField] private int handIndex;
    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<IsGround>())
        {
            ChangeState(true);
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        ChangeState(false);
    }
    private void ChangeState(bool newState)
    {
        if(handIndex == 0)
        {
            swimmer._leftHandOnGround = newState;
        }
        else
        {
            swimmer._rightHandOnGround = newState;
        }
    }
}
