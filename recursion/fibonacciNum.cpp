#include <bits/stdc++.h>
using namespace std;

bool comp1(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second < p2.second)
        return false;

    if (p1.first < p2.first)
        return true;

    return false;
}

vector<int> getFrequencies(vector<int> &v)
{
    // Write your code here.

    map<int, int> mp;
    for (auto it : v)
    {
        mp[it]++;
    }

    int mini_count = INT_MAX;
    int mini_digit = v[0];

    int maxi_count = INT_MIN;
    int maxi_digit = v[0];

    for (auto it : mp)
    {
        if (it.second > maxi_count)
        {
            maxi_digit = it.first;
            maxi_count = it.second;
        }

        if (it.second < mini_count)
        {
            mini_count = it.second;
            mini_digit = it.first;
        }
    }

    vector<int> ans;

    ans.push_back(mini_digit);
    ans.push_back(maxi_digit);

    return ans;
}

int main()
{
    vector<int> num = {1, 2, 3, 4, 5, 5};

    getFrequencies(num);
}