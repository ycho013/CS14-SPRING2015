#include <iostream> //hi
#include <cmath>
#include <cstdlib>
#include <ios>
#include <iomanip>
#include <list>
#include <iterator>
#include <sstream>
#include <iostream>
#include <forward_list>
#include "lab2.h"

using namespace std;


bool isPrime(int i)
{
    //bool prime = true;
    for ( int j =0; j < i; j++)
    {
        int remain = i % j;
        if ( remain != 0)
        {
            return false;
        }
    }
    return true;
}


int primeCount(forward_list<int> lst)
{
    int num = 0;
    
    if ( isPrime(lst.front() ) == true)
    {
        num ++;
        lst.pop_front();
        return primeCount(lst);
    }
    return num;
    /*int num = 0;
    forward_list<int>::iterator i;
    for (i = list.begin(); i != 0; i++)
    {
        if (isPrime(i->value) == true)
        {
            num++;
        }
    }
    return num;*/
    
    
}

/*void elementSwap(int pos) //use list from .h
{
    Node *tmp = new Node()
    forward_list<int>::iterator i;
    i = front();
    i = i + pos;
    forward_list<int>::iterator k = i++;
    forward_list<int>::iterator temp = i;
    k = i;
    i = temp;
}

*/


int main()
{
    forward_list<int> list;
    for (int i = 0; i < 3; i++) 
    { 
		list.push_front(i);
	}
	forward_list<int> list1;
    for (int j = 4; j < 8; j++) 
    { 
		list1.push_front(j);
	}
	//listCopy(list, list1);
	
    return 0;
}