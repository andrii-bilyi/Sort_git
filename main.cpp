#include "Core/.h/Foo.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Дан массив случайных чисел в диапазоне от –20 до +20. Необходимо найти позиции крайних отрицательных элементов
	(самого левого отрицательного элемента и самого правого отрицательного элемента) и отсортировать элементы, находящиеся между ними.*/
	const int Size = 20;
	int Arr[Size];
	InitArray2(Arr, Size);
	ShowArray(Arr, Size);
	SortBetweenNegativeElements(Arr, Size);
	ShowArray(Arr, Size);

	return 0;
}