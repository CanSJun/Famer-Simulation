using UnityEngine;
using Photon.Pun;

[RequireComponent(typeof(Move))]
public class Character : MonoBehaviourPun
{
    [SerializeField] Move move;
    [SerializeField] Camera remoteCamera;
    [SerializeField] Rigidbody rigidBody;

    private void Awake()
    {
        move = GetComponent<Move>();
        rigidBody = GetComponent<Rigidbody>();
    }

    void Start()
    {
        DisableCamera();
    }

    void Update()
    {
        move.OnKeyUpdate();
    }

    private void FixedUpdate()
    {
        move.OnMove(rigidBody);
    }

    public void DisableCamera()
    {
        // ���� �÷��̾ �� �ڽ��̶��
        if(photonView.IsMine)
        {
            Camera.main.gameObject.SetActive(false);
        }
        else
        {
            remoteCamera.gameObject.SetActive(false);
        }
    }

}
