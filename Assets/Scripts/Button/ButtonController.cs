using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class ButtonController : MonoBehaviour
{
    [SerializeField] InputActionReference controlleEvent;
    [SerializeField] TimeLine timeLine;
    private bool controllerPress = false;
    private bool colliderPress = false;

    private void Update()
    {
        
        float press = controlleEvent.action.ReadValue<float>();
       
        if (press == 1f) controllerPress = true;

        if (controllerPress)
        {
            Debug.Log("Preeees");
            timeLine.StartTimeLine();
            controllerPress = false;
            colliderPress = false;
        }
    }


}
