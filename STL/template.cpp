#include <bits/stdc++.h>
using namespace std;

int search(int a[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// Using template to make generic function , container
template <class T>
int searchTemplate(T a[], int n, T key)
{

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// Suppose we want to pass 2 different types of datatype in the fun
// template< class A , class B > or template<typename A , typename B >

template <class ForwardIterator, class T>

ForwardIterator search(ForwardIterator start, ForwardIterator end, T key)
{
    while (start != end)
    {
        if (*start == key)
        {
            return start;
        }
        start++;
    }

    return end;
}

int main()
{
    /*
    int a[] = {1, 2, 3, 4, 5, 10, 12};
    int n = sizeof(a) / sizeof(int) ;

    int key = 10;
    cout << searchTemplate(a, n, key);
     */

    /*
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    auto it = search(l.begin(), l.end(), 1);
    if (it == l.end()){ cout << "Not present !" << endl;}
    else{cout << *it << endl;}
    */
}