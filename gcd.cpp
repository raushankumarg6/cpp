#include <bits/stdc++.h>
using namespace std;
void gcd() // gcd always lies b/w 1 to min among them .
{
    int n1, n2;
    cin >> n1 >> n2;
    int minn = min(n1, n2);
    int maxx = INT_MIN;
    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0 and n2 % i == 0)
        {
            maxx = i;
        }
    }
    cout << "GCD: " << maxx;
}
int main()
{
    gcd();
}