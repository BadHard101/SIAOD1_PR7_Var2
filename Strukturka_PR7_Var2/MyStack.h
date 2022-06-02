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
    Node* head; //"������" ���������� ������
public:
    MyStack() //����������� ������ ��� ����������
    {
        head = NULL; //������� �������� ���� ���
    }
    //�����, ����������� ����� ���� � ������
    void push(int d)
    {
        Node* nd = new Node; //����������� ������� ����� ����
        nd->data = d;        //������ ���� ������
        if (head == NULL) {  //���� ������� ������ ����
            nd->next = NULL;
            head = nd;
        }
        else                 //���� ���� ��� �� ������
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