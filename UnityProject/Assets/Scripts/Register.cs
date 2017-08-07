using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;
using System.Xml.Serialization;
using System;

public class Register : MonoBehaviour {
    
    #region UI object
    [SerializeField]
    private InputField IdField;
    [SerializeField]
    private Button Summit;

    [SerializeField]
    private GameObject Main;
    [SerializeField]
    private GameObject Popup;
    [SerializeField]
    private Text PopupText;
    [SerializeField]
    private Button OK;
#endregion

    Memberinfo memberinfos;
    const string URL = "http://www.huntermusicthailand.com";

    [SerializeField]
	private GameObject PopupLoading;

    void Start () {
		Debug.Log(Application.streamingAssetsPath);

#if UNITY_EDITOR
        //Memberinfo.SetInstance(null);
        if(Memberinfo.Instance !=null)
        Memberinfo.ClearInstance();
#endif

        if (Memberinfo.Instance == null)
        {
            Main.SetActive(true);
            IdField.ActivateInputField();
            Summit.onClick.AddListener(() =>
            {
                if (string.IsNullOrEmpty(IdField.text))
                {
                    ShowPopup("Please enter your ID.");
                }
                else
                {
                    Debug.Log("ok");
                    StartCoroutine(DownloadARData(IdField.text));
                }
            });
        }
        else
        {
            SceneManager.LoadScene("AR");
        }
	}
    void ShowPopup(string text)
    {
		HideLoading ();
        PopupText.text = text;
        Popup.SetActive(true);
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

    IEnumerator DownloadARData(string id)
    {
        WWW www = new WWW(URL + "/" + id + "/ardata.xml");
        yield return www;
        Debug.Log(www.text + www.error);
        if (string.IsNullOrEmpty(www.error))
        {
		ShowLoading ();
            XmlSerializer serializer = new XmlSerializer(typeof(Memberinfo));
            //memberinfos
            StringReader reader = new StringReader(www.text);
            memberinfos = serializer.Deserialize(reader) as Memberinfo;
			Debug.Log ("ID : " + memberinfos.Member.ID);
			Debug.Log ("Name : " + memberinfos.Member.Name);
			Debug.Log ("MarkerPath : " + memberinfos.Member.MarkerPath);
			Debug.Log ("ContentPath : " + memberinfos.Member.ContentPath);
			Debug.Log ("Tel : " + memberinfos.Member.Tel);
			Debug.Log ("URL : " + memberinfos.Member.URL);
            StartCoroutine(DownloadMarker(memberinfos.Member));
        }
        else
        {
            IdField.text = string.Empty;
            ShowPopup("ID not found.Please enter new ID.\nNO data");
            yield break;
        }
    }

    IEnumerator DownloadMarker(Member member)
    {
        string id = member.ID;
        string markerName = member.MarkerPath;
        WWW fset = new WWW(URL + "/" + id + "/Marker/" + markerName + ".fset");
		Debug.Log (fset.url);
        yield return fset;
        if (string.IsNullOrEmpty(fset.error))
        {
            WriteMarker(markerName + ".fset", fset.bytes);
        }
        else
        {
            IdField.text = string.Empty;
		ShowPopup("ID not found.Please enter new ID.\nNo fset\n" + fset.error);
            yield break;
        }
        WWW fset3 = new WWW(URL + "/" + id + "/Marker/" + markerName + ".fset3");
        yield return fset3;
        if (string.IsNullOrEmpty(fset3.error))
        {
            WriteMarker(markerName + ".fset3", fset3.bytes);
        }
        else
        {
            IdField.text = string.Empty;
		ShowPopup("ID not found.Please enter new ID.่\nNo fset3\n" + fset3.error);
            yield break;
        }
        WWW iset = new WWW(URL + "/" + id + "/Marker/" + markerName + ".iset");
        yield return iset;
        if (string.IsNullOrEmpty(iset.error))
        {
            //WriteCache(markerName + ".iset", iset.bytes);
            WriteMarker(markerName + ".iset", iset.bytes);
        }
        else
        {
            IdField.text = string.Empty;
		ShowPopup("ID not found.Please enter new ID.่\nNo iset\n" + iset.error);
            yield break;
        }
        StartCoroutine(DownloadContent(member));
    }

    IEnumerator DownloadContent(Member member)
    {
        string id = member.ID;
        string contentName = member.ContentPath;
        WWW www = new WWW(URL + "/" + id + "/content/" + contentName);
        yield return www;
        Debug.Log("www download complete");
        if (string.IsNullOrEmpty(www.error))
        {
            WriteContent(id,contentName, www.bytes);
        }
        else
        {
            IdField.text = string.Empty;
		ShowPopup("ID not found.Please enter new ID.่\nNo content");
            yield break;
        }
        Debug.Log("DownloadContent : " + id + "/" + contentName);
        Memberinfo.SetInstance(member);

        SceneManager.LoadScene("AR");
    }

    void WriteContent(string id,string subPath,byte[] data)
    {
        string dir = Memberinfo.ContentDirectory + "/" + id;
        if (!Directory.Exists(dir))
        {
            Directory.CreateDirectory(dir);
        }
        File.WriteAllBytes(dir + "/" + subPath, data);
    }
    void WriteMarker(string fileName, byte[] data)
    {
        string dir = Memberinfo.ContentDirectory + "/Marker";
        if (!Directory.Exists(dir))
        {
            Directory.CreateDirectory(dir);
        }
        File.WriteAllBytes(dir + "/" + fileName, data);
    }
}
