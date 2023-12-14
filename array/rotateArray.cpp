#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3, 2, 1, 7, 6, 5, 4};

    int n = arr.size();
    int k = 3;
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());

    for (auto it : arr)
    {
        cout << it << " ";
    }
    
}