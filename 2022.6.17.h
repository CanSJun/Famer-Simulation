#pragma once
#include <iostream>
#include <queue>
#include <vector>

int n;
int vertex[10];
std::vector<int> array[10];

// ���� �Լ� ���̺�
/*
class A
{
public:
	virtual void FirstFunction()
	{
		std::cout << "ù ��° �����Լ�" << std::endl;
	}

	virtual void SecondFunction()
	{
		std::cout << "�� ��° �����Լ�" << std::endl;
	}

	void ThirdFunction()
	{
		std::cout << "�� ��° �����Լ�" << std::endl;
	}
};

class B : public A
{
public:
	void FirstFunction()
	{
		std::cout << "B�� �����Լ�" << std::endl;
	}

};
*/

// ���� ����
/*
void TopologySort()
{
	int result[10];
	std::queue<int> Queue;

	// ���� ������ 0�� ��带 ť�� �־��־�� �մϴ�.
	for (int i = 1; i <= n; i++)
	{
		if (vertex[i] == 0)
		{
			Queue.push(i);
		}
	}

	// ������ ������ ����Ƿ��� ��Ȯ�� n���� ��带 �湮�ϸ� �˴ϴ�.
	for (int i = 1; i <= n; i++)
	{
		// n���� �湮�ϱ� ���� ť�� ��������� ����Ŭ �߻��� ������ �����մϴ�.
		// ť�� ����ִٸ� �Լ��� ��ȯ�մϴ�.
		if (Queue.empty())
		{
			return;
		}

		int temp = Queue.front();
		Queue.pop();
		result[i] = temp;

		for (int j = 0; j < array[temp].size(); j++)
		{
			int count = array[temp][j];

			// ���Ӱ� ���������� 0�̵� ������ ť�� �����մϴ�.
			if (--vertex[count] == 0)
			{
				Queue.push(count);
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		std::cout << result[i] << " ";
	}
}
*/

// main
/*
int main()
{
	// ���� ����
	n = 7;

	array[1].push_back(2);
	vertex[2]++;

	array[1].push_back(5);
	vertex[5]++;

	array[2].push_back(3);
	vertex[3]++;

	array[3].push_back(4);
	vertex[4]++;

	array[4].push_back(6); // <- �� �κ� ������ �߸� ��ġ�Ǿ� �־����ϴ�.
	vertex[6]++;

	array[5].push_back(6);
	vertex[6]++;

	array[6].push_back(7);
	vertex[7]++;

	TopologySort();

	A* a = new A;
	B* b = new B;

	a->FirstFunction();
	b->FirstFunction();
	a->SecondFunction();
	b->SecondFunction();

	return 0;
}
*/