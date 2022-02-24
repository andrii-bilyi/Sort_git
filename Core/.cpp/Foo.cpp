#include "../../SystemLib.h"

//============= Задание 3 =============== 
void InitArray3(int arr[], int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}

}
void ShowArray(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}
int Search(int arr[], int size, int x) {

	for (int i = 0; i < size; i++)
	{
		if (x == arr[i])
		{
			return i;
		}
	}
	return -1;
}
void SortArray(int arr[], int size, int X) {
	int temp = 0;	
	
		for (int i = 0; i < X; i++)
		{
			for (int j = X - 1; j > i; j--)
			{
				if (arr[j - 1] < arr[j])
				{
					temp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = temp;
				}
			}
		}		
		for (int i = X + 1; i < size; i++)
		{
			for (int j = size - 1; j > i; j--)
			{
				if (arr[j - 1] > arr[j])
				{
					temp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
}