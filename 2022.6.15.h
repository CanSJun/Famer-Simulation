#pragma once
#include <iostream>

int array[] = { 4,1,3,6,2,5 };

// �� ��Ʈ �Լ�
/*
void QuickSort(int array[], int left, int right)
{
	if (left >= right)
	{
		return;
	}

	// �������� ��� ���� left(0)�� �����մϴ�. 
	int pivot = left;
	int start = left + 1;
	int end = right;

	while (start <= end)
	{
		while (array[pivot] >= array[start] && start <= right)
		{
			start++; // 4
		}

		//           4  <=   2  && 4 >= 0
		while (array[pivot] <= array[end] && end >= left)
		{
			end--; // 3
		}

		//   4 > 3
		if (start > end)
		{
			int temp = array[pivot];
			array[pivot] = array[end];
			array[end] = temp;
		}
		else
		{
			int temp = array[start];
			array[start] = array[end];
			array[end] = temp;
		}
	}

	// ��� �Լ�
	QuickSort(array, left, end - 1);
	QuickSort(array, end + 1, right);
}
*/

// main
/*
int main()
{
	int size = sizeof(::array) / sizeof(int);

	//            left  right
	//        �迭  0      5   
	QuickSort(array, 0, size - 1);

	for (int i = 0; i < size; i++)
	{
		std::cout << ::array[i] << " ";
	}

	return 0;
}
*/