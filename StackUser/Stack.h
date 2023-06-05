#pragma once
#include <iostream>
#define SIZE 10

class Stack
{
	std::string* arr;        //Указатель массива
	int top;                 //Положение указателя
	int capacity;            //Вместимость массива
	
public:
	Stack(int size = SIZE); //Конструктор
	~Stack();               //Деструктор
	void ReadKey();         //Функция ввода
	void push(std::string); //Функция добавления в массив
	std::string pop();      //Функция удаления верхнего элемента

	bool isEmpty();         //Функция проверки на наличие элементов
	bool isFull();          //Функция проверки на переполненность элементами
};

