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
    vector<int> a{3,1,-2,-5,2,-4};

    int n = a.size();
    vector<int> ans(n);
    int pos = 0;
    int neg = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            ans[pos] = a[i];
            pos += 2;
        }
        else
        {
            ans[neg] = a[i];
            neg += 2;
        }
    }

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}

int main()
{
    fastio

    // test
    solve();

    return 0;
}