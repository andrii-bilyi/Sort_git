#include "Core/.h/Foo.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*��� ������ ����� ������������ 10 ���������. �������� �������, ������� ��������� ������ �� �����������	��� ��
	��������, � ����������� �� �������� ��������� �������. ���� �� ����� 1, ���������� ���� �� ��������, ���� 0,
	�� �� �����������. ������ 2 ��������� ������� � ��� ������ � ��� ������, ������ �������� �� ��������� ����� 1.*/
	const int Size = 10;
	int Arr[Size];
	InitArray(Arr, Size);
	ShowArray(Arr, Size);
	cout << "���������� �������" << endl;
	cout << "�� �������� - ������� 1" << endl;
	cout << "�� ����������� - ������� 0" << endl;
	bool x;
	cin >> x;
	cout << endl;
	SortArray(Arr, Size, x);
	ShowArray(Arr, Size);

	return 0;
}