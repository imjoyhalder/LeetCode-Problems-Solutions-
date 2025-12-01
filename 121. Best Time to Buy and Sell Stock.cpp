#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &arr)
    {
        int n = arr.size();
        int price = 0, buy = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > buy)
            {
                price = max(price, arr[i] - buy);
            }
            buy = min(buy, arr[i]);
        }
        return price;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}