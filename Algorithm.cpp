#include <iostream>

// �Ű����� �迭 
/*
void Function(int array[], int n)
{              
    for (int i = 0; i < n; i++)
    {
        array[i] = 100;
    }
}
*/

void Bubble(int array[], int n)
{
    int temp = 0;

    // �迭�� ũ�Ⱑ 5�̸� 5-1(4ȸ��) �ݺ�
   
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            //       [1]          [2]
            //        4            2
            if (array[j] > array[j + 1])
            {
                temp = array[j + 1];       // temp(2) <- 2
                array[j + 1] = array[j];   // j+1[2] (4) <- 4
                array[j] = temp;           // j[1] (2) <- temp(2)
            }
        }
    }
}

int main()
{
    // �迭 �Ű�����
    /*
    int array [] = {1,2,3,4,5 }; // 20

    int count = sizeof(array) / sizeof(array[0]);

    Function(array, count);

    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        std::cout << array[i] << std::endl;
    }
    */

    // ���� �˰���
    // Bubble Sort

    // �迭�� ũ��� 5�Դϴ�.
    // [3] [4] [2] [5] [1]
    // Bubble�Լ� ȣ��
    // [1] [2] [3] [4] [5]

    int array[] = { 3,4,2,5,1 };
    int size = sizeof(array) / sizeof(array[0]);

    Bubble(array, size);

    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << std::endl;
    }


}
