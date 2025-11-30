#include <bits/stdc++.h>
class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int sum = accumulate(begin(nums), end(nums), 0);
        return sum % k;
    }
};

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}