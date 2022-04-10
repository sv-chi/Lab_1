#include "Stack.h"
#include <iostream>
#include <QDebug>

Stack::Stack(){ // конструктор по умолчанию
    size = 0;
    array = nullptr;
    top = 0;
}

Stack::Stack(int s){    // конструктор с размером
    size = s;
    array = new int[size];
    top = 0;
}

void Stack::Push(int a){    // добавить
    array[top] = a;
    top++;
}

int Stack::Pop(){   // извлеч вершину стека

    if (top == 0){
        EStackEmpty *empty = new EStackEmpty("Pop is fail. Stack is empty");
        throw empty;
    }else{
        top--;
        return array[top];
    }
}

void Stack::Clear(){    // очистить стек
    top = 0;
}

bool Stack::isEmpty(){  // проверка на пустоту
    if (top == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::isFull(){   // проверка на заполненость
    if (top == size)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void Stack::printStack(){   // вывести стек на экран

    if(top != 0){
        qDebug().noquote()<< "printStack is working: ";
        for(int i = 0; i < this->top; i++){
            qDebug().noquote()<< this->array[i];
        }
    }else{
        qDebug().noquote()<< "printStack is working: stack is clear";
    }
    qDebug().noquote()<< "";
}

int Stack::getTop(){
    return this->top;
}

int Stack::getSize(){
    return this->size;
}
