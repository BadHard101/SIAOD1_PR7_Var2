#ifndef MYMASS_H
#define MYMASS_H

#include <iostream>
using namespace std;

class MyMass
{
private:
    int n = 19;
    int mass[20];
    int i = -1;
public:
    MyMass() //конструктор класса без параметров
    {}
    //метод, добавляющий новый узел в список
    void push(int d)
    {
        i++;
        mass[i] = d;
    }
    int pop()
    {
        if (i!=-1)
        {
            i--;
            return mass[i + 1];
        }
        
    }
    int top()
    {
        return mass[i];
    }
    void clear()
    {
        i = -1;
    }
    bool empty()
    {
        if (i == -1)
            return true;
        else
            return false;
    }
    int get_i() 
    {
        return i;
    }
};

#endif