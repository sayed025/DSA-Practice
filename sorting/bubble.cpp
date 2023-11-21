#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // Write your code here.
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
}

int main()
{
    int ara[] = {1, 2, 4, 3, 7, 5};

    bubbleSort(ara, 6);
}