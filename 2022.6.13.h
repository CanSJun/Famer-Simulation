#pragma once
#include <iostream>

using namespace std;

// ���� ����
/*
void Insert(int array[], int n)
{
	int temp, j;

	for (int i = 1; i < n; i++)
	{
		// 45 <----- 45
		temp = array[i];

		//   j = 3    ���� (3 > 0 && 99 > 45) 
		for (j = i; i > 0 && array[j - 1] > temp; j--) // j�� --�ϹǷ� j�� 0��° �ε����� �����ϴ�.
		{
			// ������ �Ǿ��� ��
			// [3]99 <---- [2] 99
			array[j] = array[j - 1];
		}

		// 1��° �ε����� ó���� 94�� ������ ���� �־��ݴϴ�.
		array[j] = temp;
	}
}
*/

// main
/*
int main()
{
	// O(n^2) -> ��ǰ ���� < ���� ���� < ���� ����
	// �ð� ���⵵ ������ ȿ����

	// ���� ����
	
				 // 23 99 94 45 38
	int array[] = { 99,23,94,45,38 };
	int size = sizeof(array) / sizeof(array[0]);

	Insert(array, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}


	// �Ųٷ� �д� ���ڿ��� �����ּ���.
	string value_1;
	string value_2;

	cin >> value_1 >> value_2;

	string temp;

	for (int i = value_1.length() - 1; i >= 0; i--)
	{
		if (value_1[i] > value_2[i])
		{
			temp = value_1;
			break;
		}
		else if (value_1[i] < value_2[i])
		{
			temp = value_2;
			break;
		}
	}

	for (int i = value_1.length() - 1; i >= 0; i--)
	{
		cout << temp[i];
	}
}
*/