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

#ifndef FORWARD_LIST_H
#define FORWARD_LIST_H

using namespace std;


struct Node
{
    int value;
    Node* next;
    Node(int value) : value(value), next(0) {}
};

template <typename Type>
class list
{
    private:
        Node* head;
        Node* tail;
    public:
        int primeCount(forward_list<int> lst);
        void elementSwap(int pos);
        void listCopy(forward_list<Type> L, forward_list <Type> P);
        void printLots(forward_list <Type> L, forward_list<int> P);
};

template <typename Type>
void listCopy(forward_list<Type> L, forward_list <Type> P)
{
    forward_list<int>::iterator i;
    forward_list<int>::iterator temp = P.end();
    for (i = L.begin(); i != L.end(); i++)
    {
        P.insert_after(temp, *i);
    }
    
}
template <typename Type>
void printLots(forward_list <Type> L, forward_list<int> P)
{
    forward_list<int>::iterator i;
    for (i = P.begin(); i != L.end(); i++)
    {
        cout << *(L.begin + i);
    }
}

#endif

