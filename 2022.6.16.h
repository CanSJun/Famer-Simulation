#pragma once
#include <iostream>

// main
/*
int main()
{
	// ��� ����
	
	int array[] = {1,3,3,2,4,5,5};
	int count[5] = { 0, };

	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		count[array[i] - 1]++;
	}

	for (int i = 0; i < sizeof(count) / sizeof(int); i++)
	{
		for (int j = 0; j < count[i]; j++)
		{
			std::cout << i + 1 << " ";
		}
	}


	// ���� Level 1 �ð�

	// �� ���� ������ �Է¹޽��ϴ�.

	// ù ��° �Է��� �ð��� �ǹ��մϴ�.
	// �� ��° �Է��� ���� �ǹ��մϴ�.

	// �ϳ��� ������ �� �Է¹޽��ϴ�.
	// �߰����� �п� ���� �Է°��Դϴ�.

	// 24�� �� ū ���� �Է��ϰ� �Ǹ�

	int hour;
	int minute;
	int addminute;

	std::cin >> hour >> minute >> addminute;

	minute += addminute;

	if (minute >= 60)
	{
		while (minute >= 60)
		{
			minute -= 60;
			hour++; // 3
		}

		if (hour >= 24)
		{
			hour -= 24;
		}
	}

	std::cout << hour << "��" << minute << "��" << std::endl;
	
	return 0;
}
*/