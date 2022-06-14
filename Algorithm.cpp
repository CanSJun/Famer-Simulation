#include <iostream>

using namespace std;

int array[] = { 54,3,66,20,91,17,82,49 };
int sorted[8];

void Merge(int left, int right)
{
	int middle = (left + right) / 2;
	int i = left; // 0
	int j = middle + 1;
	int k = left; // 0

	while (i <= middle && j <= right)
	{
		// ���� �迭���� �ּҰ��� ������ �� ������ �迭�� �� ū ���
		// �״�� ���� �迭�� �ּҰ��� ��� �迭���� ����ǵ��� �����ϸ� �˴ϴ�.
		if (::array[i] > ::array[j])
		{
			sorted[k++] = ::array[j++];
		}
		else
		{
			sorted[k++] = ::array[i++];
		}
	}

	// ������ �迭�� ���� ��� �迭�� ���� ���� ���� �ִٸ� �״�� �־��ݴϴ�.
	if (i > middle)
	{
		while (j <= right)
		{
			sorted[k++] = ::array[j++];
		}
	}
	else
	{
		while (i <= middle)
		{
			sorted[k++] = ::array[i++];
		}
	}

	for (int v = left; v <= right; v++)
	{
		// [ 54,3,66,20,91,17,82,49 ] <- [ 3,17,20,49,54,66,82,91 ] 
		::array[v] = sorted[v];
	}
}


// �迭�� ����Ǿ� �ִ� ������ ���� 2���� �����ϰ� �����ϴ� �Լ�
void MergeSort(int left, int right)
{
	int middle;

	if (left < right)
	{
		// [] [] [] [] | [] [] [] []
		// (left <= middle) ���� �κ� ����
		// (middle+1 <= right) ������ �κ�����

		middle = (left + right) / 2;
		// <- MergeSort�� ���
		MergeSort(left, middle);      // 0, 3
		MergeSort(middle + 1, right); // 4, 7

		Merge(left, right); // �����ϴ� ���� �Լ� ȣ��
	}
}

int main()
{
	int size = sizeof(::array) / sizeof(int);

	MergeSort(0, size-1);

	for (int i = 0; i < size; i++)
	{
		cout << ::array[i] << " ";
	}

	return 0;
}
