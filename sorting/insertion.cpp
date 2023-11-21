#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{
    // write your code here
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
                break;
        }
    }
}

int main()
{
    vector<int> ara = {2, 1, 4, 3, 7, 5};

    insertionSort(ara, 6);
}