#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
class MyStack
{
private:
    Node* head; //"голова" связанного списка
public:
    MyStack() //конструктор класса без параметров
    {
        head = NULL; //первого элемента пока нет
    }
    //метод, добавляющий новый узел в список
    void push(int d)
    {
        Node* nd = new Node; //динамически создаем новый узел
        nd->data = d;        //задаем узлу данные
        if (head == NULL) {  //если создаем первый узел
            nd->next = NULL;
            head = nd;
        }
        else                 //если узел уже не первый
        {
            nd->next = head;
            head = nd;
        }
    }
    int pop()
    {
        char pop = head->data;
        head = head->next;
        return pop;
    }
    int top()
    {
        return head->data;
    }
    void clear()
    {
        head = NULL;
    }
    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
};

#endif