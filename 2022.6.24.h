#pragma once
#include <iostream>

// �� ����
/*
#define Parent(x) (x-1)/2

void Heap(int array[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int child = i;

		while (child > 0)
		{
			int root = Parent(child);

			if (array[root] < array[child])
			{
				int temp = array[root];
				array[root] = array[child];
				array[child] = temp;
			}

			child = root;
		}
	}
}
*/

// main
/*
int main()
{
	int data[] = { 9, 4, 7, 8, 5, 2, 1, 6, 3 };
	int size = sizeof(data) / sizeof(int);

	// ���� �����մϴ�.
	Heap(data, size);

	for (int i = size - 1; i >= 0; i--)
	{
		// ���� ū root�� �� ������ ���ҿ� �ٲ��ݴϴ�.
		int temp = data[i];
		data[i] = data[0];
		data[0] = temp;

		// �� ������ ���Ҹ� �����ϰ� �ٽ� ���� �����մϴ�.
		Heap(data, i);
	}

	for (int Element : data)
	{
		std::cout << Element << " ";
	}

	return 0;
}
*/