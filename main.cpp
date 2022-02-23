#include "Core/.h/Foo.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*Дан массив чисел размерностью 10 элементов. Написать функцию, которая сортирует массив по возрастанию	или по
	убыванию, в зависимости от третьего параметра функции. Если он равен 1, сортировка идет по убыванию, если 0,
	то по возрастанию. Первые 2 параметра функции — это массив и его размер, третий параметр по умолчанию равен 1.*/
	const int Size = 10;
	int Arr[Size];
	InitArray(Arr, Size);
	ShowArray(Arr, Size);
	cout << "Сортировка массива" << endl;
	cout << "По убыванию - нажмите 1" << endl;
	cout << "По возрастанию - нажмите 0" << endl;
	bool x;
	cin >> x;
	cout << endl;
	SortArray(Arr, Size, x);
	ShowArray(Arr, Size);

	return 0;
}