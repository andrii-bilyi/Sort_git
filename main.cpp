#include "Core/.h/Foo.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*��� ������ �� 20 ����� ����� �� ���������� �� 1 �� 20. ����������:
			- �������� �������, �������������� �������� ������� ������������ �������;
			- ������� ��������� ����� �� ���� �� ��������� � ����� ������� ����� ���������� ����� � �������;
			- ������������� �������� �������, ����������� ����� �� ��������� ������� �� ��������, � ��������
			�������, ����������� ������ �� ��������� ������� �� �����������.*/
	const int Size = 20;
	int Arr[Size];
	InitArray3(Arr, Size);
	ShowArray(Arr, Size);
	cout << "������� ��������� ����� �� ��������� �� 1 �� 20: ";
	int key;
	cin >> key;
	cout << endl;
	int index;
	index = Search(Arr, Size, key);
	if (index != -1)
	{
		cout << "����� " << key << " ���� � ������� ��� ������� " << index << endl;
		SortArray(Arr, Size, index);
		ShowArray(Arr, Size);
	}
	else
	{
		cout << "����� " << key << " ����������� � �������\n";
	}
	return 0;
}