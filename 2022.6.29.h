#pragma once
#include <iostream>

// ��ũ�� ����Ʈ
/*
struct Node
{
	int data;
	Node* next;
};

class Linkedlist
{
private:
	Node* head;
	Node* tail;

public:
	Linkedlist()
	{
		head = NULL;
		tail = NULL;
	}

	void FrontNode(int data)
	{
		Node* headNode = new Node;
		headNode->data = data;

		// ��ũ�� ����Ʈ�� ����ִٸ� ù��° Node�� headNode�� �߰��մϴ�.
		if (head == NULL)
		{
			head = headNode;
			tail = headNode;
		}
		else // ��ũ�� ����Ʈ�� �����Ͱ� �ִٸ� headNode�� ���� ����Ű�� �ּҸ� head�� �����մϴ�.
		{
			headNode->next = head;
			head = headNode;
		}
	}

	void LastNode(int data)
	{
		Node* tailNode = new Node;
		tailNode->data = data;
		tailNode->next = NULL;

		// ��ũ�� ����Ʈ�� ����ִٸ� ù��° Node�� headNode�� �߰��մϴ�.
		if (head == NULL)
		{
			head = tailNode;
			tail = tailNode;
		}
		else // ��ũ�� ����Ʈ�� �����Ͱ� �ִٸ� headNode�� ���� ����Ű�� �ּҸ� head�� �����մϴ�.
		{
			tail->next = tailNode;
			tail = tailNode;
		}
	}

	void InsertNode(Node* PrevNode, int data)
	{
		Node* addNode = new Node;
		addNode->data = data;

		// ���� �� �� Node�� next �����͸� addNode�� next�� �����մϴ�.
		addNode->next = PrevNode->next;

		// addNode����  Node�� next �����͸� addNode�� �����մϴ�.
		PrevNode->next = addNode;
	}

	void DeleteNode(Node* PrevNode)
	{
		// ������ Node�� �ӽ� Node�� �����մϴ�.
		// ������ Node�� 1 �ܰ� �� Node�� Next ������
		Node* tempNode = PrevNode->next;

		// ������ Node�� �����մϴ�.
		// ������ Node�� Next �����͸� 1 �ܰ� �� Node�� next �����͸� �����մϴ�.
		PrevNode->next = tempNode->next;

		delete tempNode;
	}

	void ShowData(Node* head)
	{
		if (head == NULL)
		{
			return;
		}
		else
		{
			std::cout << head->data << " ";
			ShowData(head->next);
		}
	}

	Node* GetHead()
	{
		return head;
	}
};
*/

// main
/*
int main()
{
	Linkedlist list;

	list.LastNode(1);
	list.LastNode(20);

	list.DeleteNode(list.GetHead());

	list.ShowData(list.GetHead());

	return 0;
}
*/