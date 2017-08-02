using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Video;

public class ContentController : MonoBehaviour
{
    [SerializeField]
    private ARController arController;
    [SerializeField]
    private ARCamera arCamera;
    private Camera arCameraNumber;
    [SerializeField]
    private ARTrackedObject arTrackedObject;
    [SerializeField]
    private ARMarker arMarker;
    [SerializeField]
    private GameObject contentQuad;
    [SerializeField]
    private MeshRenderer contentMesh;
    [SerializeField]
    private VideoPlayer videoPlayer;
    [SerializeField]
    private Text messageText;
    [SerializeField]
    private GameObject PopupMessage;
	[SerializeField]
	private GameObject PopupLoading;
	[SerializeField]
    private Button OpenWebsiteUI;

    // Use this for initialization
    void Start()
    {
		
        arCameraNumber = arCamera.GetComponent<Camera>();
		if (Memberinfo.Instance != null) {
			Debug.Log ("Start AR : ");
			StartCoroutine (LoadContent ());
		} else {
			ShowLoading ();
			Debug.Log ("Load AR");
			StartCoroutine(Memberinfo.DownloadARData("001",(string e)=> {
				//HideLoading();
				messageText.text = "ไม่สามารถอัพเดทข้อมูลได้";
				PopupMessage.SetActive(true);
			}, () => {
				Debug.Log ("Load Complete");
				StartCoroutine (LoadContent ());
			}
			));
		}
    }

	void ShowLoading()
	{
		PopupLoading.SetActive (true);
		#if UNITY_IPHONE
		Handheld.SetActivityIndicatorStyle(UnityEngine.iOS.ActivityIndicatorStyle.WhiteLarge);
		#elif UNITY_ANDROID
		Handheld.SetActivityIndicatorStyle(AndroidActivityIndicatorStyle.Small);
		#elif UNITY_TIZEN
		Handheld.SetActivityIndicatorStyle(TizenActivityIndicatorStyle.Small);
		#endif

		Handheld.StartActivityIndicator();
	}

	void HideLoading()
	{
		Handheld.StopActivityIndicator ();
		PopupLoading.SetActive (false);
	}

    public void UpdateContent()
    {
		//PopupLoading.SetActive (true);
		ShowLoading ();
        StartCoroutine(Memberinfo.DownloadARData(Memberinfo.Instance.ID,(string e)=> {
			//PopupLoading.SetActive(false);
			HideLoading();
            messageText.text = "ไม่สามารถอัพเดทข้อมูลได้";
            PopupMessage.SetActive(true);
        }, () => {
            SceneManager.LoadScene("AR");
        }
        ));
    }

    public void BackToRegister()
    {
        Memberinfo.ClearInstance();
        SceneManager.LoadScene("Register");
    }
     
    public void OpenWebsite()
    {
        string httpStr = "http://";
        string httpsStr = "https://";
        if (Memberinfo.Instance.URL.Substring(0,7) == httpStr || Memberinfo.Instance.URL.Substring(0, 8) == httpsStr)
        {
            Application.OpenURL(Memberinfo.Instance.URL);
        }
        else
        {
            Application.OpenURL(httpStr + Memberinfo.Instance.URL);
        }
    }

    //void LoadContent()
	IEnumerator LoadContent()
    {
		ShowLoading();
		yield return new WaitForSeconds (0.1f);
        Member member = Memberinfo.Instance;
        Vector2 size = Vector2.zero;
        string contentPath = Memberinfo.ContentDirectory + "/" + member.ID + "/" + member.ContentPath;
        Debug.Log(contentPath);
        switch (Memberinfo.Instance.ContentType)
        {
            case FileExtension.jpg:
                if (File.Exists(contentPath))
                {
                    //WWW www = new WWW("file:///" + contentPath);
                    //WWW www = new WWW("jar:file:///" + contentPath);

                    Texture2D tex = new Texture2D(2, 2);
                    tex.LoadImage(File.ReadAllBytes(contentPath));
                    tex.Apply();
                    contentQuad.GetComponent<MeshRenderer>().material.mainTexture = tex;
                    size = new Vector2(tex.width, tex.height);
                }
                else
                {
                    Debug.Log("File not exist");
                    BackToRegister();
                }
                break;
            case FileExtension.jpeg:
                goto case FileExtension.jpg;
            case FileExtension.png:
                goto case FileExtension.jpg;
            case FileExtension.mp4:
                videoPlayer.url = "file://" + contentPath;
                videoPlayer.prepareCompleted += SetContectQuad;
                break;
        }
        arMarker.NFTDataName = Memberinfo.Instance.MarkerPath;
        arMarker.enabled = true;
        arTrackedObject.enabled = true;
        arCamera.enabled = true;
        arController.enabled = true;
        Debug.Log("arMarker : " + arMarker.NFTDataName + " : " + arMarker.NFTWidth + " , " + arMarker.NFTHeight + " : " + arMarker.NFTScale);
        contentQuad.transform.localPosition = new Vector3(arMarker.NFTWidth / 2, arMarker.NFTHeight / 2, 0);
        float imgHeight = arMarker.NFTWidth * ((float)size.y / (float)size.x);
        contentQuad.transform.localScale = new Vector3(arMarker.NFTWidth, imgHeight, 1);

		yield return new WaitForSeconds (3);
		HideLoading ();
    }

    void SetContectQuad(VideoPlayer vp)
    {
        contentQuad.transform.localPosition = new Vector3(arMarker.NFTWidth / 2, arMarker.NFTHeight / 2, 0);
        float imgHeight = arMarker.NFTWidth * ((float)vp.texture.height / (float)vp.texture.width);
        contentQuad.transform.localScale = new Vector3(arMarker.NFTWidth, imgHeight, 1);
    }
    
    public void OnMarkerFound(ARMarker marker)
    {
        Debug.Log("OnMarkerFound : " + marker.name);
        ShowContent();
    }

    public void OnMarkerLost(ARMarker marker)
    {
        Debug.Log("OnMarkerLost : " + marker.name);
        HideContent();
    }

    private void ShowContent()
    {
        contentMesh.enabled = true;
        if (!string.IsNullOrEmpty(Memberinfo.Instance.URL))
        {
            OpenWebsiteUI.interactable =true;
        }
        switch (Memberinfo.Instance.ContentType)
        {
            case FileExtension.mp4:
                videoPlayer.Play();
                break;
        }
    }

    private void HideContent()
    {
        arCamera.ClearSmooth();
        contentMesh.enabled = false;
        OpenWebsiteUI.interactable = false;
        switch (Memberinfo.Instance.ContentType)
        {
            case FileExtension.mp4:
                videoPlayer.Pause();
                break;
        }
    }
}
