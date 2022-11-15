#include <bits/stdc++.h>
using namespace std;
class Book
{
public:
    string name;
    int price, edition;
    Book()
    {
    }
    Book(string name, int price, int edition)
    {
        this->name = name;
        this->price = price;
        this->edition = edition;
    }
};

class BookCompare
{
public:
    bool operator()(Book A, Book B)
    {
        if (A.name == B.name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// Here we create a obejct of Bookcomapre
//  Bookcomapre cmp ;
// cmp () ; // call functional fun it is a obejct or functor

// template + Iterator + Comparetor
// template->  freedom from datatype , Iterator -> freedom from containers , Compartor ->  give freedom from diff types of operations perfom on the data  
template <class ForwardIterator, class T, class Compare>
ForwardIterator searchBook(ForwardIterator start, ForwardIterator end, T key, Compare cmp)
{
    while (start != end)
    {
        if (cmp(*start, key))
        {
            return start;
        }
        start++;
    }

    return end;
}
int main()
{
    Book b1("C++", 1200, 2020);
    Book bookToFind("C++", 1110, 2022);
    Book b3("Java", 900, 2018);
    Book b4("Python", 850, 2017);
    Book b5(b3);

    list<Book> l;
    l.push_back(b1);
    l.push_back(bookToFind);
    l.push_back(b3);
    l.push_back(b4);

    // if(b1 == bookToFind) // Not allowed because system does not know how to compare two book so , we have to write comaparetor fun for this .
    // {
    //     cout<< "True" ;
    // }

    BookCompare cmp;

    // cmp() -> Calling BookCompare
    /*
    if (cmp(b1, bookToFind))
    {
        cout << "True same books ";
    }
    */

    list<Book>::iterator it = searchBook(l.begin(), l.end(), bookToFind, cmp);
    //    or auto it = searchBook(l.begin() , l.end( ), bookToFind , cmp) ;
    if (it != l.end())
    {
        cout << "Book found: " << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}