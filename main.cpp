#include "Core/.h/Foo.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*��� ������ ��������� ����� � ��������� �� �20 �� +20. ���������� ����� ������� ������� ������������� ���������
	(������ ������ �������������� �������� � ������ ������� �������������� ��������) � ������������� ��������, ����������� ����� ����.*/
	const int Size = 20;
	int Arr[Size];
	InitArray2(Arr, Size);
	ShowArray(Arr, Size);
	SortBetweenNegativeElements(Arr, Size);
	ShowArray(Arr, Size);

	return 0;
}