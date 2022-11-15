#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Arithmetic operator -> + - * % /
    // Relational operator-> > < >= <= !=
    // Logical  Operator -> and or not(unary )
    // Biwise Operator -> & | ^ ~ << >>
    // left shift 5 << 3 -> 5*pow(2,3)
    // Ternary operator- > It is a simply if-else block . Syntax= >  condition ? statement1 : statement2 ;
    int x;
    cin >> x;
    x % 2 == 0 ? cout << "Even" : cout << "Odd";

    // Another ex
    string w = x > 20 ? "Hot" : "Cold";
}