#include <bits/stdc++.h>
#include <cstring> // to use string tokenizer , we can break the str in the list of token on the based on delimiters .
using namespace std;

// char *strtok(char *s , char* delimiters ) => , we can break the str in the list of token on the based on delimiters .
// returns a token on subsequent call
// on the first call fun should be passed with str argument for 's'
// on subseuant calls we should pass the string arguement as null
// -> finally it return null to the ptr after the str end after tokenization

// char *strtok(char *s , char* delimiters )
// s is the str which we want to tokenize based on the delimiters string
// ex-> str = i love india , delimietrs= " " => i , love , india  in the form of token

// Building our own stringTokenizer

vector<string> stringTokenizer(string s, char delimeter)
{
    vector<string> strToken; // India is a great country
    int i = 0;
    int idx;
    while (i != s.length())
    {
        string temp = "";
        for (int j = i; j < s.length(); j++)
        {
            if (s[j] == ' ')
            {
                idx = j;
                cout << temp << " ";
                strToken.emplace_back(temp);
                break; 
            }
            temp += s[j];
        }

        i += (idx+1);
    }
    return strToken;
}

void print(vector<string> v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }
}
int main()
{
    char s[100] = "Today is a rainy day";

    char delimeter = ' ';
    vector<string> vs = stringTokenizer(s, delimeter);
    // print(vs, vs.size());

    /*
    // ptr is a pointer which always points to the first token of that string  , internally it creates a array &
    // copy the first token to the newly created array & return the address to the ptr pointer
    char *ptr = strtok(s, " ");
    cout << ptr << endl; // Today

    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        cout << ptr << endl; // is
    }
    */
}