#pragma once
#include <iostream>
#include <string>

using namespace std;

// �� ����
/*
void ShellSort(int array[], int size)
{
	int gap = 0;
	int key = 0;
	int i = 0;
	int j = 0;
	int count = 0;

	gap = size / 2;

	while (true)
	{
		if (gap % 2 == 0)
		{
			gap++;
		}

		for (i = gap; i < size; i++)
		{
			key = array[i];

			for (j = i - gap; j >= 0; j = j - gap)
			{
				if (key < array[j])
				{
					array[j + gap] = array[j];
				}
				else
				{
					break;
				}
			}

			array[j + gap] = key;
		}

		if (gap == 1)
			break;

		gap = gap / 2;
	}
}
*/

// main
/*
int main()
{
	// �� ����
	
	int array[] = { 9,6,5,8,10,1,3,7,4,2 };
	int size = sizeof(array) / sizeof(int);

	ShellSort(array, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}

	// �ܾ��� ���� (20% ~ 30%)
	// ù �ٿ� ���� ��ҹ��ڿ� �������� �̷���� ���ڿ��� �־����ϴ�.
	// �� ���ڿ��� ���̴� 1,000,000�� ���� �ʴ´�.
	// �ܾ�� ���� �Ѱ��� ���еǸ�, ������ �����ؼ� ������ ���� �����ϴ�.
	// ���ڿ��� �������� �����ϰų� ���� �� �ֽ��ϴ�.

	//The Wind Case of Big Button   -> 6 
	// The First and Second a third -> 6

	std::string alphabet;
	std::getline(std::cin, alphabet);

	int count = 0;

	for (int i = 0; i < alphabet.length(); i++)
	{
		if (alphabet[i] == ' ')
		{
			count++;
		}
	}

	if (alphabet[0] == ' ')
	{
		count--;
	}

	if (alphabet[alphabet.length() - 1] == ' ')
	{
		count--;
	}

	std::cout << count + 1;

	return 0;
}
*/