#if UNITY_EDITOR
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class AllScenesEditor : Editor
{
    [Header("Load")]
    public List<string> pathList = new List<string>();

    [ContextMenu("LoadAll")]
    public void LoadAll()
    {
        pathList = new List<string>();

        foreach (UnityEditor.EditorBuildSettingsScene S in UnityEditor.EditorBuildSettings.scenes)
        {
            if (S.enabled)
            {
                string name = S.path.Substring(S.path.LastIndexOf('/') + 1);
                name = name.Substring(0, name.Length - 6);
                pathList.Add(name);
            }
        }
    }

}
#endif