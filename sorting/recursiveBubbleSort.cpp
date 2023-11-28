#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;

    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    // Range reduced after recursion:
    bubbleSort(arr, n - 1);
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

    bubbleSort(arr, 5);

    for (auto it : arr)
    {
        cout << it << " ";
    }
}