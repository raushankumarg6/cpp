#include <bits/stdc++.h>
using namespace std;

int howMuchCoins(int coins[], int n, int money)
{
    int count = 0;
    while (money)
    {
        int lb = lower_bound(coins, coins + n, money) - coins;
        bool isExist = binary_search(coins, coins + n, money);
        if (isExist)
            money = abs(money - coins[lb]);
        else
            money = abs(money - coins[lb - 1]);
        count++ ; 
    }
    return count;
}

int main()
{
    // Indian Money
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, 2000};
    int n = sizeof(coins) / sizeof(int);
    // Find min coins to make 168 by the indian coin

    int money = 168;

    cout << howMuchCoins(coins, n, money);
}