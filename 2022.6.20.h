#pragma once
#include <iostream>

int index = 7;

// �ϳ��� ��� ������ �����մϴ�.
/*
struct Node
{
	int data;
	// �ڱ� �ڽ��� ����Ű�� ����ü ������ 
	Node* LeftChild;
	Node* RightChild;
};
*/

// ���� ��ȸ
/*
void Preorder(Node* pointer)
{
	if (pointer)
	{
		std::cout << pointer->data << " ";
		Preorder(pointer->LeftChild);
		Preorder(pointer->RightChild);
	}

	// ��Ʈ ��� -> ���� ���� ��� -> ������ ���� ���
	// 1 2 4 5 3 6 7
	// ��� �Լ��� �ڱ� �ڽ��� ȣ���մϴ�.
}
*/

// ���� ��ȸ
/*
void Inorder(Node* pointer)
{
	if (pointer)
	{
		Inorder(pointer->LeftChild);
		std::cout << pointer->data << " ";
		Inorder(pointer->RightChild);
	}

	// ���� ���� ��� -> ��Ʈ ��� -> ������ ���� ���
	// 4 2 5 1 6 3 7
	// ��� �Լ��� �ڱ� �ڽ��� ȣ���մϴ�.
}
*/

// ���� ��ȸ
/*
void Postorder(Node* pointer)
{
	if (pointer)
	{
		Postorder(pointer->LeftChild);
		Postorder(pointer->RightChild);
		std::cout << pointer->data << " ";
	}

	// ���� ��ȸ
	// ���� ���� ��� -> ������ ���� ��� -> ��Ʈ ���
}
*/

// main
/*
int main()
{
	struct Node node[8];

	for (int i = 1; i <= index; i++)
	{
		node[i].data = i;
		node[i].LeftChild = nullptr;
		node[i].RightChild = nullptr;
	}

	for (int i = 1; i <= index; i++)
	{
		if (i % 2 == 0)
		{
			node[i / 2].LeftChild = &node[i];
		}
		else
		{
			node[i / 2].RightChild = &node[i];
		}
	}

	Postorder(&node[1]);

	return 0;
}
*/