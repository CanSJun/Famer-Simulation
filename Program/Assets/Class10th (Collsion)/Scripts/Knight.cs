using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum State
{ 
    WALK,
    ATTACK,
    DIE
}

public class Knight : MonoBehaviour
{
    [SerializeField] State state;

    void Start()
    {
        
    }

    void Update()
    {
        switch(state)
        {
            case State.WALK   : Walk();
                break;
            case State.ATTACK : Attack();
                break;
            case State.DIE    : Die();
                break;
        }
    }

    public void Walk()
    {
        Debug.Log("Walk");
    }

    public void Attack()
    {
        Debug.Log("Attack");
    }

    public void Die()
    {
        Debug.Log("Die");
    }

    private void OnTriggerEnter(Collider other)
    {
        // OnTriggerEnter() : ���� ������Ʈ�� ���������� ���� �浹�� ���� ��
        //                    ȣ��Ǵ� �̺�Ʈ �Լ��Դϴ�.


    }

    private void OnTriggerStay(Collider other)
    {
        // OnTriggerStay() : ���� ������Ʈ�� ���������� ���� �浹 ���� ��
        //                   ȣ��Ǵ� �̺�Ʈ �Լ��Դϴ�.
           

    }

    private void OnTriggerExit(Collider other)
    {
        // OnTriggerExit() : ���� ������Ʈ�� ���������� ���� �浹�� ����� ��
        //                   ȣ��Ǵ� �̺�Ʈ �Լ��Դϴ�.

        Debug.Log("OnTriggerExit");
    }

    private void OnCollisionEnter(Collision collision)
    {
        // OnCollisionEnter() : ���� ������Ʈ�� �������� �浹�� ���� �� 
        //                      ȣ��Ǵ� �̺�Ʈ �Լ��Դϴ�.

        Debug.Log("OnCollisionEnter");
    }

    private void OnCollisionStay(Collision collision)
    {
        // OnCollisionStay() : ���� ������Ʈ�� �������� �浹 ���� �� 
        //                     ȣ��Ǵ� �̺�Ʈ �Լ��Դϴ�.

        Debug.Log("OnCollisionStay");
    }

    private void OnCollisionExit(Collision collision)
    {
        // OnCollisionExit() : ���� ������Ʈ�� �������� �浹�� ����� ��
        //                     ȣ��Ǵ� �̺�Ʈ �Լ��Դϴ�.

        Debug.Log("OnCollisionExit");
    }
}
