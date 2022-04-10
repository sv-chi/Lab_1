#ifndef STACK_H
#define STACK_H

#include "EStackException.h"
#include "EStackEmpty.h"

class Stack{
    private:
        int size; // размер стека
        int *array; // собственно сам массив стека
        int top;  // показывает на то, где находится вершина
    public:
        Stack(); // конструктор по умолчанию
        Stack(int s); // конструктор с размером
        void Push(int a);  // добавить
        int Pop();  // извлеч вершину стека
        void Clear();  // очистить стек
        bool isEmpty(); // проверка на пустоту
        bool isFull();  // проверка на заполненость
        void printStack(); // вывести стек на экран
        int getTop();
        int getSize();
};

#endif // STACK_H
