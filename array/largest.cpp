#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n)
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

    cout << largestElement(arr, 6) << endl;
}