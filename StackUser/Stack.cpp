#include "Stack.h"
#include <iostream>
#include <string>

using namespace std;

Stack::Stack(int size)              //Конструктор стэка
{
	arr = new string[size];         //Инициализация массива
	capacity = size;
	top = -1;                       //Положение указателя
}

Stack::~Stack()                     //Деструктор стэка
{
	delete[] arr;                   //Очистка памяти
}

void Stack::ReadKey()              //Функция для ввода
{
	string line; 

	while (true)
	{
		cout << "Enter: ";
		getline(cin, line);
		push(line);

		if (isFull())
		{
			cout << "OUT -->" << pop() << endl; //Вывод и удаление 5 элемента
		}
	}
}

void Stack::push(string line)  //Функция добавления в массив
{
	arr[++top] = line;
}

string Stack::pop()           //Функция удаления и вывода верхнего элемента
{
	return arr[top--];
}

bool Stack::isEmpty()         //Функция проверки на наличие элементов
{
	return top == -1;
}

bool Stack::isFull()          //Функция проверки на переполненность элементами
{
	return top == capacity - 1;
}
