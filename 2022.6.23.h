#pragma once
#include <iostream>

int Node[11];

/*
int ParentFind(int data)
{
	if (Node[data] == data)
	{
		return data;
	}

	return Node[data] = ParentFind(Node[data]);
}
*/

// ������ �������ִ� �Լ�
/*
void Union(int small, int big)
{
	small = ParentFind(small);
	big = ParentFind(big);

	if (small < big)
	{
		Node[big] = small;
	}
	else
	{
		Node[small] = big;
	}
}
*/

// ���� �������� Ȯ�� �Լ�
/*
int Find(int small, int big)
{
	small = ParentFind(small);
	big = ParentFind(big);

	if (small == big)
	{
		std::cout << "���� �����Դϴ�." << std::endl;
		return 1;
	}
	else
	{
		std::cout << "���� ������ �ƴմϴ�." << std::endl;
		return 0;
	}
}
*/

// main
/*
int main()
{
	// ���α׷��ӽ� LV.1 (���ڿ� �ݺ�)
	
	int value = 0;
	int count = 0;
	int repeat = 0;

	std::string alphabet;

	std::cin >> value;

	for (int i = 0; i < value; i++)
	{
		std::cin >> repeat >> alphabet;

		for (int j = 0; j < alphabet.length(); j++)
		{
			while (repeat != count)
			{
				std::cout << alphabet[j]; // AABB
				count++;
			}
			count = 0;
		}
		std::cout << std::endl;
	}
	

	// ���Ͽ� ���ε�
	int size = sizeof(Node) / sizeof(int);

	for (int i = 1; i < size; i++)
	{
		Node[i] = i;
	}

	Union(1, 2);
	Union(2, 3);

	return 0;
}
*/