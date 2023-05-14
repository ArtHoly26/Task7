#include <iostream>

using namespace std;

//Задание 1. Используя два указателя на массив целых
//чисел, скопировать один массив в другой.Использовать
//в программе арифметику указателей для продвижения
//по массиву, а также оператор разыменования.
//Задание 2. Используя указатель на массив целых чисел,
//изменить порядок следования элементов массива на
//противоположный.
//Использовать в программе арифметику указателей
//для продвижения по массиву, а также оператор разыменования.
//Задание 3. Используя два указателя на массивы целых
//чисел, скопировать один массив в другой так, чтобы во
//втором массиве элементы находились в обратном порядке.
//Использовать в программе арифметику указателей
//для продвижения по массиву, а также оператор разыменования.

//#define Task1
//#define Task2
//#define Task3

int main()
{
	setlocale(LC_ALL, "Rus");
#ifdef Task1

	int const size = 10;
	int arr[size] = { 5,1,8,10,12,3,4,12,19,22 };
	int brr[size];
	int *ptr1 = arr;
	int *ptr2 = brr;

	for (int i = 0; i < size; i++) *(ptr2 + i) = *(ptr1 + i);

	for (int i = 0; i < size; i++) cout << brr[i] << "\t"; 
#endif

#ifdef Task2

	int const size = 10;
	int arr[size] = { 5,1,8,10,12,3,4,12,19,22};
	int* ptr = arr;
	int buffer;
	for (int i = 0; i < size/2; i++) 
	{
		buffer = *(ptr + i);
		*(ptr+i) = *(ptr + size - i - 1);
		*(ptr + size - i - 1) = buffer;
	}

	for (int i = 0; i < size; i++) cout << arr[i] << "\t";
#endif 

#ifdef  Task3
	int const size = 10;
	int arr[size] = { 5,1,8,10,12,3,4,12,19,22 };
	int brr[size];
	int* ptr1 = arr;
	int* ptr2 = brr;
    for (int i = 0; i < size; i++)
	{
		*(ptr2 + i) = *(ptr1 + size - i - 1);
	}

	for (int i = 0; i < size; i++) cout << brr[i] << "\t";
#endif

	
}