using UnityEngine;

[RequireComponent(typeof(Collider))]
public class ZoneDetecte : MonoBehaviour
{
    [SerializeField] private string materialParametr = "Base Color"; //_Color
    [SerializeField] private float speed = 0.1f;
    private GameObject textObj;
    private Material changeMat;
    private float target = 0;
    private float current = 0;

    private void Awake()
    {
        textObj = transform.GetChild(0).gameObject;
        changeMat = textObj.GetComponent<Renderer>().sharedMaterial;
    }
    private void Update()
    {
        if (current != target) DoAnimation();
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<Hand>())
        {
            target = 1f;
            
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.GetComponent<Hand>())
        {
            target = 0f;
        }
    }

    void DoAnimation()
    {
        current += Mathf.Lerp(-speed, speed, target);
        changeMat.SetColor(materialParametr, new Color(1, 0,0 , current));

        Debug.Log(current);
        //changeMat.SetFloat(materialParametr, current);
    }
}

  
