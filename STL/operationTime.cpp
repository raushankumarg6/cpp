#include <bits/stdc++.h>
using namespace std;

// Comparetor fun to sort the vector<pair> according to the 2nd element of the pairs
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}

int endTime(vector<int> &a, vector<int> &b, int n) // O(n)
{
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
        vp.push_back({a[i], b[i]});

    sort(vp.begin(), vp.end());
    // Sorting the vector of pairs according to the 2nd element of the pairs
    // sort(vp.begin(), vp.end(), comp);

    // for (int i = 0; i < n; i++) // Printing
    //     cout << vp[i].first << " " << vp[i].second << endl;

    int sumofTime = 0;
    for (int i = 0; i < vp.size(); i++)
        sumofTime += vp[i].second;

    return sumofTime;
}

int endTime2(vector<int> &a, vector<int> &b, int n)
{
    set<pair<int, int>> sp;
    for (int i = 0; i < n; i++)
        sp.insert({a[i], b[i]});

    int sumofTime = 0;
    for (auto &p : sp)
        sumofTime = sumofTime + p.second;
    return sumofTime;
}

int main()
{
    vector<int> a{0, 3, 9, 2, 6};
    vector<int> b{3, 4, 2, 9, 6};
    int n = a.size();
    cout << "Sum of time: " << endTime(a, b, n) << endl;
    cout << "Sum of time by 2nd method: " << endTime2(a, b, n) << endl;
}