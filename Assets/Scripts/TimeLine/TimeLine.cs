using System.Collections;
using System.Collections.Generic;
using UnityEngine.Video;
using UnityEngine;

public class TimeLine : MonoBehaviour
{
    [Header("Animation")]
    [SerializeField] private Animation timeLineaAimation;
    [SerializeField] private AnimationClip clipAimation;
    [Header("Video")]
    [SerializeField] private List<VideoClip> clips;
    [SerializeField] private VideoPlayer player;
    [SerializeField] private GameObject videoPlane;
    [SerializeField] private GameObject backGroundPlane;

    [Header("Sound")]
    [SerializeField] private List<AudioClip> audioClips;
    [SerializeField] private AudioSource audioPlayer;

    [Header("Move")]
    [SerializeField] Swimmer swimmer;
    [SerializeField] Transform gamePlayer;
    [SerializeField] Vector3 startPoint;

    [Header("LastAnim")]
    [SerializeField] private Animation lastaAimation;
    [SerializeField] private AnimationClip lastClipAimation;


    private void Awake()
    {
        timeLineaAimation = GetComponent<Animation>();
    }

    public void StartTimeLine()
    {
        
        timeLineaAimation.clip = clipAimation;
        timeLineaAimation.Play();
    }
   public void StopTimeLine()
    {
        timeLineaAimation.Stop();
        timeLineaAimation.clip = null;
        timeLineaAimation.clip = clipAimation;

    }
    public void PlayVideo(int videoIndex)
    {
        player.clip = clips[videoIndex];
        audioPlayer.clip = audioClips[videoIndex];
        audioPlayer.Play();
        player.Play();
    }
    public void OnLoop()
    {
        audioPlayer.loop = true;
        player.isLooping = true;
    }
    public void OffLoop()
    {
        audioPlayer.loop = false;
        player.isLooping = false;
    }
    public void MoreSpeed()
    {
        //swimmer.maxForce = 1.2f;
    }
    public void LessSpeed()
    {
        //swimmer.maxForce = .5f;
    }
    public void StartPoint()
    {
        gamePlayer.position = startPoint;
        MoreSpeed();
    }
    public void LastAnimation()
    {
        lastaAimation.clip = lastClipAimation;
        lastaAimation.Play();
    }
    
}
