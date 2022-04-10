#include "mainwindow.h"
#include "EStackEmpty.h"
#include "EStackException.h"
#include "Stack.h"
#include <QApplication>
#include <QDebug>
#include <QString>


int main(int argc, char *argv[])
{


    Stack *stack = new Stack(6);  // создаем наш стек
    stack->Push(2);     // добавляем ну 2
    stack->printStack(); // смотрим как добавилось

    stack->Push(1); // добавляем еще элементов
    stack->Push(11);
    stack->Push(111);
    stack->Push(1111);
    stack->Push(11111);
    stack->printStack();
    // это вывод всей информации
    qDebug() <<"isFull"<< stack->isFull() << "isEmpty"<< stack->isEmpty()<< "getTop"<< stack->getTop() << "getSize"<< stack->getSize();

    stack->Pop(); // изымаем из стека элемент
    stack->printStack();    // проверяем как изьялось
    qDebug() <<"isFull"<< stack->isFull() << "isEmpty"<< stack->isEmpty()<< "getTop"<< stack->getTop() << "getSize"<< stack->getSize();



    try {   // вот и работа исключения, удаляем абсолютно все элементы и смотрим, как выведится ошибка
        stack->Pop();
        stack->Pop();
        stack->Pop();
        stack->Pop();
        stack->Pop();
        stack->Pop();
    }catch (EStackException *e) {
        qDebug().noquote()<< "try/catch "<< e->what();
    }

    stack->printStack();    // снова пытаемся вывести стек, но он пуст
    qDebug() <<"isFull"<< stack->isFull() << "isEmpty"<< stack->isEmpty()<< "getTop"<< stack->getTop() << "getSize"<< stack->getSize();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
