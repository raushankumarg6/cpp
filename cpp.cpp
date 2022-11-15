// # - directive that directs the compiler  to pre-process something
#include <bits/stdc++.h> //
// #include<opencv>
// using namespace cv ;   //
using namespace std; // namespace  is the space which we will tell as std to avoid naming conflicts , typing shortcut etc.
#define PI 3.14      // PI is a constant , it has a replacement text it does not require any memory it simply replace.
// 3.14 is a replacement text for the PI symbol  ,  PI is a macro , for defining shortcut

int main()
{
    // 1 byte = 8 bit , min memory that compiler will assign is 1 byte
    // 'A'- 65 'a'- 98
    char c = 'a';        // 1 byte  , 0 t0 255 , 8 bit is more enough to store the chat type of data because , char represents as 1 to 127 can be written in  8 bits so on  .
    bool b = 1;          // 1 byte
    int i = 21;          // 4 byte  by default signed int
    short int si = 45;   // 2 byte
    float f = 20.2;      // 4 byte  ,Range-> - (-2^31 .. 0.. (2^31-1) 32 bit - 1 bit for sign 8 bit for floor value , 23 bit for decimal point
    double d = 21.23659; // 8 byte , 64 bit - 1 bit for sign 11 bit for floor value , 52 bit for decimal point
    cout << sizeof(float) << " " << sizeof(long int) << " " << sizeof(long long int) << endl;
    // unsigned means postive only here all bits will contribure in power of 2 but in signed first bit will denote the positive or negative.

    // 2's complement means negative of that number .
    // Negative no are stored in 2's complement form in memory
    const int ci = 5; // Read only bucket, const used for making variables as constant it will not change or re-assign further . initialisation is must
    // ci = 6 ; // not allowed because ci is type of const
    // Data type modifiers - >  signed(+ , - ) , unsigned(+) , short etc

    // Typecasting-> Change of resulting datatype
    // Priority -> float > int > char > bool.  ex: int +char -> int

    // Implicit typecasting
    // cout<< (5/2.1)<<endl ;

    // char + int
    char l = 'a';
    cout << l + 1 << endl; // 66

    l = l + 1;
    cout << l << endl; // 'b'

    char ch = 67;
    cout << ch << endl; // 'b'

    // Explicit typecasting -> We force the compiler to typecast as we wish .
    int x = 5;
    cout << (float)x / 3 << endl; // 1......
    char c = 'a';
    cout << ch << endl;
    cout << (char)(ch + 1) << endl; // 'b'

    // for loop
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    int i = 0;
    for (; i < 10;)
    {
        i++;
    }

    // Switch
    // switch(exp)
    // {
    //     case x:
    //         // code
    //         break;
    //     case y:
    //         // code
    //         break;
    //     default:
    //         //code
    // }

    return 0;
}