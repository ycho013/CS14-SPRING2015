#include <iostream> //hi
#include <cmath>
#include <cstdlib>
#include <ios>
#include <iomanip>
#include <list>
#include <iterator>
#include <sstream>
#include <forward_list>
#include <iostream>

#ifndef LAB3_H
#define LAB3_H

using namespace std;

template <typename T>
class TwoStackedFixed
{
    private:
        T *twoStacks[]; //pointer to stacks
        int size1;      //array size
    public:
        TwoStackFixed(int size, int maxtop ); 
        void pushStack1(T value); 
        void pushStack2(T value);
        T popStack1(); 
        T popStack2(); 
        bool isFullStack1(); 
        bool isFullStack2();
        bool isEmptyStack1(); 
        bool isEmptyStack2(); 
};

template <typename T>
TwoStackedFixed::TwoStackedFixed(int size, int maxtop)
{
    T twoStacks = new T[size];
    
}

template <typename T>
void TwoStackedFixed::pushStack1(T value)
{
    if ( isFullStack1() == true)
    {
        exit(0);
    }
    if ( twoStacks[maxtop - 1] != '\0')
    {
        twoStacks[value];
    }
}
template <typename T>
void TwoStackedFixed::pushStack2(T value)
{
    if ( isFullStack1() == true)
    {
        exit(0);
    }
    if ( twoStacks[maxtop] != '\0')
    {
        twoStacks[value];
    }
}

template <typename T>
T TwoStackedFixed::popStack1()
{
    T value = twoStacks[maxtop - 1];
    twoStacks[maxtop - 1] = NULL;
    return value;
    
}

template <typename T>
T TwoStackedFixed::popStack2()
{
    T value = twoStacks[maxtop - 1];
    twoStacks[maxtop] = NULL;
    return value;
}

bool TwoStackedFixed::isFullStack1()
{
    for ( int i =0; i < maxtop; i++)
    {
        if (twoStacks[i] == '\0')
        {
            return false;
        }
    }
    return true;
    
}
bool TwoStackedFixed::isFullStack2()
{
    for ( int i = maxtop; i < size; i++)
    {
        if (twoStacks[i] == '\0')
        {
            return false;
        }
    }
    return true;
}

bool TwoStackedFixed::isEmptyStack1()
{
    for ( int i =0; i < maxtop; i++)
    {
        if (twoStacks[i] != '\0')
        {
            return false;
        }
    }
    return true;
    
}

bool TwoStackedFixed::isEmptyStack2()
{
    for ( int i =maxtop; i < size; i++)
    {
        if (twoStacks[i] != '\0')
        {
            return false;
        }
    }
    return true;
}

template <typename T>
class TwoStackedOptimal
{
    private:
        T *twoStacks[]; //pointer to stacks
        int size1;      //array size
    public:
        TwoStackOptimal(int size); 
        void pushStack1(T value); 
        void pushStack2(T value);
        T popStack1(); 
        T popStack2(); 
        bool isFullStack1(); 
        bool isFullStack2();
        bool isEmptyStack1(); 
        bool isEmptyStack2(); 
};

template <typename T>
void TwoStackedOptimal::pushStack1(T value)
{
    if ( isFullStack1() == true)
    {
        exit(0);
    }
    if ( twoStacks[maxtop - 1] != '\0')
    {
        twoStacks[value];
    }
}
template <typename T>
void TwoStackedOptimal::pushStack2(T value)
{
    if ( isFullStack1() == true)
    {
        exit(0);
    }
    if ( twoStacks[maxtop] != '\0')
    {
        twoStacks[value];
    }
}



bool TwoStackedOptimal::isFullStack1()
{
    for ( int i =0; i < maxtop; i++)
    {
        if (twoStacks[i] == '\0')
        {
            return false;
        }
    }
    return true;
    
}
bool TwoStackedOptimal::isFullStack2()
{
    for ( int i = maxtop; i < size; i++)
    {
        if (twoStacks[i] == '\0')
        {
            return false;
        }
    }
    return true;
}

bool TwoStackedOptimal::isEmptyStack1()
{
    for ( int i =0; i < maxtop; i++)
    {
        if (twoStacks[i] != '\0')
        {
            return false;
        }
    }
    return true;
    
}

bool TwoStackedOptimal::isEmptyStack2()
{
    for ( int i =maxtop; i < size; i++)
    {
        if (twoStacks[i] != '\0')
        {
            return false;
        }
    }
    return true;
}


#endif

