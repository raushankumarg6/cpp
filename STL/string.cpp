#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// string class

bool compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
    return a.length() > b.length();
}

void stringInput()
{
    int n;
    cin >> n;

    cin.get(); // to get input although the next line

    string s[100];

    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }
    sort(s, s + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
}

int main()
{
    // string s0;
    // string s1("Hello");
    // string s2 = "Hello World !";
    //  string s3 = s2; // or string s3(s2) ;

    // Making string from char array
    // char c[] = {'a', 'b', 'c', '\0'};
    // string s4(c);
    // cout << s4;

    // if (s0.empty())
    // cout << "s0 is an empty string " << endl;

    // append
    //  s1.append(" Raushan")  ;
    //  s1+=" Gupta!" ;
    //  cout<< s1;

    // remove , length
    // cout << s1.length();
    // s1.clear();
    // cout << s1.length();

    // Compare two str -> if equal then 0 or
    // s1.compaer(s2) ; // s1 > s2 then 1 else -1
    // string ss("apple");
    // string ss2("mango");
    // int y = ss2.compare(ss);
    // cout << y;

    // Overloaded Operator opearators presents for string objects
    // We can use > ,  <  , ==
    // if(ss2 > ss) { cout<<"ss2 > ss" ; }

    // Find substring
    // str.find("word") ;
    // string s= "I want to have apple juice";
    // int idx = s.find("apple") ;
    // cout<< idx<< endl ;

    // remove the word from string
    // str.remove
    // string word = "apple";
    // int len = word.length() ;
    // word.erase(idx , len)  ;
    // cout << s <<endl ;

    // Iterate over all the char in the str
    // string str = "Raushan";

    // for (int i = 0; i < str.length(); i++)
    // {
    //     cout << str[i] << " ";
    // }

    // Iterators
    // string ::iterator it;
    // for (auto it = str.begin(); it != str.end(); it++)
    // {
    //     cout << (*it) << ":" ;
    // }

    // for each loop
    // string str = "Raushan";
    // for (char ch : str)
    // {
    //     cout << ch << ",";
    // }

    stringInput();
}
