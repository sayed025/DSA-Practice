#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] > arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

int main()
{
    vector<int> num = {1, 2, 3, 4, 5, 5};

    selectionSort(num);
}