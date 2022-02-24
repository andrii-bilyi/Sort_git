#include "Core/.h/Foo.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*ƒан массив из 20 целых чисел со значени€ми от 1 до 20. Ќеобходимо:
			- написать функцию, разбрасывающую элементы массива произвольным образом;
			- создать случайное число из того же диапазона и найти позицию этого случайного числа в массиве;
			- отсортировать элементы массива, наход€щиес€ слева от найденной позиции по убыванию, а элементы
			массива, наход€щиес€ справа от найденной позиции по возрастанию.*/
	const int Size = 20;
	int Arr[Size];
	InitArray3(Arr, Size);
	ShowArray(Arr, Size);
	cout << "¬ведите случайное число из диапазона от 1 до 20: ";
	int key;
	cin >> key;
	cout << endl;
	int index;
	index = Search(Arr, Size, key);
	if (index != -1)
	{
		cout << "„исло " << key << " есть в массиве под номером " << index << endl;
		SortArray(Arr, Size, index);
		ShowArray(Arr, Size);
	}
	else
	{
		cout << "„исло " << key << " отсутствует в массиве\n";
	}
	return 0;
}