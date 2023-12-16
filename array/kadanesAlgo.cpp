#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef string str;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nn cout << "\n";
#define test     \
    int test;    \
    cin >> test; \
    while (test--)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    vector<int> arr{-7, -8, -16, -4, -8, -5, -7, -11, -10, -12, -4, -6, -4, -16, -10};
    int n = arr.size();

    long long maximum = LONG_MIN;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum > maximum)
        {
            maximum = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << maximum << endl;
}

int main()
{
    fastio

    // test
    solve();

    return 0;
}