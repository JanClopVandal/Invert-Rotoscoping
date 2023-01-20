using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Animator))]

public class Hand : MonoBehaviour
{
    Animator animator;
    void Start()
    {
        animator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    internal void SetGrip(float v)
    {
        throw new NotImplementedException();
    }

    internal void SetTrigger(float v)
    {
        throw new NotImplementedException();
    }
}
