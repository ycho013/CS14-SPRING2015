#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>
#include <list>
#include <iostream>
#include <map>
#include <set>
#include <utility>
#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

using namespace std;

template <typename L>
void selectionsort(L &l)
{
    auto i = l.end() - 1;           //end minus one
    auto j = l.begin() + 1;         //begin plus one
    for ( i ; i != l.begin(); i--)
    {
        L first = l.begin();    //set first to first element of data
        for ( j ; j <= i; j++)
        {
            if ( *j < *first)   //if j is < first
            {
                first = j;      //set first to j
            }
        }
        swap(j, i);     //swap smallest with i
    }
    
}

int main()
{
    return 0;
}

#endif