#include "../../SystemLib.h"

//============= Задание 2 =============== 
void InitArray2(int arr[], int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = -20 + rand() % 40;
	}

}
void ShowArray(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}
void SortBetweenNegativeElements(int arr[], int size) {
	int index1 = 0, index2 = 0, temp;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			index2 = i;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			index1 = i;
			break;
		}
	}
	for (int i = index1 + 1; i < index2; i++)
	{
		for (int j = index2 - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Сортировка между первым и последним отрицательными элементами" << endl;
}
