using UnityEngine;

[RequireComponent(typeof(Collider))]
public class ZoneDetecte : MonoBehaviour
{
    [SerializeField] private string materialParametr = "_BaseColor"; //_Color 
    [SerializeField] private float speed = 0.1f;
    private GameObject textObj;
    private Renderer renderCom;
    private Material changeMat;
    private float target = 0;
    private float current = 0;

    private void Awake()
    {
        textObj = transform.GetChild(0).gameObject;
        renderCom = textObj.GetComponent<Renderer>();
        //changeMat = textObj.GetComponent<Renderer>().material;
        //textObj.GetComponent<Renderer>().sharedMaterial = changeMat;
        Debug.Log(changeMat);
    }
    private void Update()
    {
        if (current != target) DoAnimation();
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<Hand>())
        {
            Debug.Log("Enter");
            target = 1f;
            
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.GetComponent<Hand>())
        {
            target = 0f;
            Debug.Log("Exit");
        }
    }

    void DoAnimation()
    {
        current += Mathf.Lerp(-speed, speed, target);
        current = Mathf.Clamp(current, 0f, 1f);
        renderCom.material.color = new Color(1, 0, 0, current);
        //renderCom.material.SetColor(materialParametr, new Color(1, 0,0 , current));

        Debug.Log(current);
        //changeMat.SetFloat(materialParametr, current);
    }
}

  
