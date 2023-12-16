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
    vector<int> v{2, 2, 1, 3, 1, 1, 3, 1, 1};
    int n = v.size();
    int el;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            el = v[i];
            cnt = 1;
        }
        else if (el == v[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    cout << el << endl;
}

int main()
{
    fastio

    // test
    solve();

    return 0;
}