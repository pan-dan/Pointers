#include <iostream>

using namespace std;

//#define  POINTERS_BASICS
#define  POINTERS_AND_ARRAYS



void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;

	cout << a << endl;		//������� �������� ���������� 'a' �� �����
	cout << &a << endl;		//�������� ����� ���������� 'a' ����� ��� ������ �� �����
	cout << pa << endl;		//������� ����� ���������� 'a' ���������� � ��������� 'pa'
	cout << *pa << endl;	//�������������� ����� � ��������� 'pa', � �������� ��������


#endif // POINTERS_BASICS

#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;

#endif // POINTERS_AND_ARRAYS

	//POINTER_ARITHMETICS

	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}







}