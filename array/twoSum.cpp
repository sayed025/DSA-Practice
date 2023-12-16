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
    int n = 5;
    vector<int> book{4, 1, 2, 3, 1};
    int target = 5;

    sort(book.begin(), book.end());

    int right = n - 1;
    int left = 0;

    while (left < right)
    {
        int sum = book[right] + book[left];

        if (sum == target)
        {
            cout << "YES\n";
            return;
        }
        else if (sum > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    cout << "NO\n";
}

int main()
{
    fastio

        test
        solve();

    return 0;
}