#pragma once
#include <iostream>

// ���Ḯ��Ʈ�� ��� ����ü
/*
struct Node
{
	int Data;
	struct Node * next;
};
*/

int main()
{
	// ���� ����Ʈ
	/*
	// ���� ��带 �����մϴ�.
	struct Node * head = new Node();
	head->Data = 10;

	// ù ��° ���
	struct Node* node1 = new Node();

	head->next = node1;
	node1->Data = 9;

	// �� ��° ���
	struct Node* node2 = new Node();
	node1->next = node2;
	node2->Data = 1;

	// �� ��° ���
	struct Node* node3 = new Node();
	node2->next = node3;

	node3->next = NULL;

	while (head->next != NULL)
	{
		std::cout << head->Data << std::endl;
		head = head->next;
	}

	delete head;
	delete node1;
	delete node2;
	*/

	// ���ϱ� ����Ŭ
	/*
	int A, B = 0;
	int temp = 0;
	int number = 0;
	int count = 0;

	int value = 0;
	int result = 0;

	std::cin >> value;

	result = value;

	while (1)
	{
		A = value / 10;
		B = value % 10;
		temp = (A + B) % 10;
		number = temp + (B * 10);

		value = number;

		count++;

		if (value == result)
		{
			break;
		}
	}

	std::cout << count << std::endl;
	*/

	return 0;
}