#include <bits/stdc++.h>
using namespace std;

void isPossible()
{
    string buildName = "";
    string arch, Wife;
    int nn;
    cin >> arch >> Wife;
    cin >> nn;

    for (int i = 0; i < nn; i++)
    {
        string ele;
        cin >> ele;
        buildName += ele;
    }

    unordered_map<char, int> ump;

    bool isCorrectByName = true;

    for (auto x : arch)
        ump[x]++;
    for (auto x : Wife)
        ump[x]++;

    for (auto x : buildName)
    {
        if (ump.find(x) != ump.end())
        {
            ump[x]--;
            if (ump[x] == 0)
                ump.erase(x);
        }
        else
        {
            isCorrectByName = false;
            break;
        }
    }

    if (isCorrectByName)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{

    isPossible();

    return 0;
}