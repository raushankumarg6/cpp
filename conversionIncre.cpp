#include <bits/stdc++.h>
using namespace std;
int isValid(int number)
{
    int n = (int)(log2(number));
    string binary_str = bitset<64>(number).to_string().substr(64 - n - 1);
    for (int i = 1; i < binary_str.size(); i++)
        if (binary_str[i] == '1' and binary_str[i - 1] == '1')
            return -1;
    return stoi(binary_str);
}
void printAllValidNumber(int m, int n)
{
    vector<int> ans;
    for (int i = m + 1; i < n; i++)
    {
        int res = isValid(i);
        if (res != -1)
            ans.emplace_back(res);
    }
    sort(ans.begin(), ans.end());
    for (auto ele : ans)
        cout << ele << endl;
}

int main()
{
    int m, n;
    cin >> m >> n;
    printAllValidNumber(m, n);
}
