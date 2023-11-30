#include <bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a)
{

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << isSorted(10, arr) << endl;
}