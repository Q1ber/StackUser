#pragma once
#include <iostream>
#define SIZE 10

class Stack
{
	std::string* arr;        //��������� �������
	int top;                 //��������� ���������
	int capacity;            //����������� �������
	
public:
	Stack(int size = SIZE); //�����������
	~Stack();               //����������
	void ReadKey();         //������� �����
	void push(std::string); //������� ���������� � ������
	std::string pop();      //������� �������� �������� ��������

	bool isEmpty();         //������� �������� �� ������� ���������
	bool isFull();          //������� �������� �� ��������������� ����������
};

