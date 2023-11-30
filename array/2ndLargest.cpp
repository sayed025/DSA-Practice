#include <bits/stdc++.h>
using namespace std;

int largestElement(int n, vector<int> &arr)
{
    // Write your code here.

    int maxi = -1;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }

    return maxi;
}

int main()
{
    vector<int> arr = {2, 1, 4, 3, 7, 5};

    cout << largestElement(6, arr) << endl;
}