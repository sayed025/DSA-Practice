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
    vector<int> prices{7, 1, 5, 4, 3, 6};
    int n = prices.size();

    int mini = prices[0];
    int profit = 0;

    for (int i = 1; i < n; i++)
    {
        profit = max(profit, prices[i] - mini);
        mini = min(mini, prices[i]);
    }

    cout << profit << endl;
}

int main()
{
    fastio

        //test
        solve();

    return 0;
}