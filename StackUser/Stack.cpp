#include "Stack.h"
#include <iostream>
#include <string>

using namespace std;

Stack::Stack(int size)              //����������� �����
{
	arr = new string[size];         //������������� �������
	capacity = size;
	top = -1;                       //��������� ���������
}

Stack::~Stack()                     //���������� �����
{
	delete[] arr;                   //������� ������
}

void Stack::ReadKey()              //������� ��� �����
{
	string line; 

	while (true)
	{
		cout << "Enter: ";
		getline(cin, line);
		push(line);

		if (isFull())
		{
			cout << "OUT -->" << pop() << endl; //����� � �������� 5 ��������
		}
	}
}

void Stack::push(string line)  //������� ���������� � ������
{
	arr[++top] = line;
}

string Stack::pop()           //������� �������� � ������ �������� ��������
{
	return arr[top--];
}

bool Stack::isEmpty()         //������� �������� �� ������� ���������
{
	return top == -1;
}

bool Stack::isFull()          //������� �������� �� ��������������� ����������
{
	return top == capacity - 1;
}
