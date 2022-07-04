#include <iostream>
#include <map>

struct Bucket * hashTable;

struct Node
{
	int key;
	int value;
	Node * Next;
};

struct Bucket 
{
	int count;
	struct Node * head;
};

struct Node * CreateNode(int key, int value)
{
	struct Node * newNode = new Node();

	newNode->key = key;
	newNode->value = value;

	newNode->Next = nullptr;

	return newNode;
}

int HashFunction(int key)
{
	return key % 10;
}

void Insert(int key, int value)
{
	int hashIndex = HashFunction(key);

	struct Node * newNode = CreateNode(key, value);

	// �ƹ� ��尡 ���� ���
	if (hashTable[hashIndex].count == 0)
	{
		hashTable[hashIndex].head = newNode;
	}
	else // ���� �ְ� ���� ���ҿ� �̹� ��尡 �ִ� ���
	{
		// Bucket�� ������� �ʴٸ�, ���ο� ����� next �����͸� ���� head�� �����մϴ�.
		newNode->Next = hashTable[hashIndex].head;
		// Bucket�� head�� ���ο� ���� �����մϴ�.
		hashTable[hashIndex].head = newNode;

		hashTable[hashIndex].count++;
	}
}

void Search(int key)
{
	// HashFunction�� ���ؼ� 0 ~ 9 ������ ���� hashIndex�� ���� �˴ϴ�.
	int hashIndex = HashFunction(key);

	struct Node* node = hashTable[hashIndex].head;

	if (node == nullptr)
	{
		std::cout << "There is no key" << std::endl;
	}

	while (node != nullptr)
	{
		// �츮�� �˻��� key�� ���� ��ġ�ϴٸ� key ���� value���� ����մϴ�.
		if (node->key == key)
		{
			std::cout << "key : " << node->key << " value : " << node->value << std::endl;
			return;
		}

		node = node->Next;
	}
}

void Print()
{
	struct Node * node;

	for (int i = 0; i < 10; i++)
	{
		node = hashTable[i].head;

		std::cout << "Bucket : " << i << " th" << std::endl;

		while (node != nullptr)
		{
			std::cout << "key : " << node->key << " value : " << node->value << " ";

			node = node->Next;
		}

		std::cout << std::endl;
	}
}


int main()
{
	// map
	/*
	std::map<std::string, int> map;

	map.insert(std::pair<std::string, int>("Count", 10));

	map["Naver"] = 200; // <- [key] (Naver) [value] (200)

    // �ݺ��� 
	std::map<std::string, int>::iterator iter;

	for (iter = map.begin(); iter != map.end(); iter++)
	{
		std::cout << "key : " << iter->first << "  value : " << iter->second << std::endl;
	}
	*/

	// �ؽ�
	hashTable = new Bucket[10];

	for (int i = 0; i < 10; i++)
	{
		hashTable[i].count = 0;
		hashTable[i].head = nullptr;
	}

	Insert(1, 10);
	Insert(16, 20);
	Insert(15, 30);
	Insert(13, 40);
	Insert(12, 50);
	Insert(11, 60);

	Print();



	// �ؽ��� ������ ����ڰ� ã���� �ϴ� value�� ����/�˻�/������ �� �ֱ� ������ �����մϴ�.

	// �ؽ��� ������ �������� ������ �˻��� �־� reference of locality�� ���� ĳ�� �̽��� ��� ������ ���� ���� ������ �˻��� ��ȿ�����Դϴ�.


	return 0;
}