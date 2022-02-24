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
void Sort(int arr[], int size, int x) {


}