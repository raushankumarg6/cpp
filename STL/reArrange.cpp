#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n)
{
    sort(a, a + n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<< " ";
    }

    int v[n]; 
    for (int i = 0; i < n/2; i++)
    {
        
        v[i] = a[i];
        v[i+1]=a[n-i-1];
       
    }

    return 0;
}

int main()
{
    int a[] = {2, 3, 0, -1, 5, 8, 9, 10, 15};
    int n = sizeof(a) / sizeof(int);
    solve(a, n);
}