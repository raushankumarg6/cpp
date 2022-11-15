#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    cout << " Printing vector : ";
    for (auto ele : v)
    {
        cout << ele << " ";
    }
}
void decimalToBinary()
{
    int n;
    cin >> n; //  15
    int binary = 0;
    while (n)
    {
        int rem = n % 2;
        binary = binary * 10 + rem;
        n /= 2;
    }
    cout << binary;
}

// void binaryToDecimal()
// {
//     int n;
//     cin >> n; //  15
//     int binary = 0;
//     while (n)
//     {
//         int rem = n % 10;
//         binary = binary * 10 + rem;
//         n /= 10;
//     }
//     cout << binary;
// }
int main()
{
    binaryToDecimal();
    // decimalToBinary();
    // cout<<"Size: "<< sizeof(int) ; 
}