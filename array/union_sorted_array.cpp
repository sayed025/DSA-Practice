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
    vector<int> a{1, 2, 3, 4, 5};
    vector<int> b{1, 1, 2, 2, 6};
    vector<int> ans;

    int i = 0, j = 0;

    while (i < 5 && j < 5)
    {
        if (a[i] <= b[j])
        {
            if (ans.size() == 0 || ans.back() != a[i])
            {
                ans.push_back(a[i]);
            }
            i++;
        }
        else if (b[j] < a[i])
        {
            if (ans.size() == 0 || ans.back() != b[j])
            {
                ans.push_back(b[j]);
            }
            j++;
        }
    }

    for (int k = i; k < 5; k++)
    {
        if (ans.size() == 0 || ans.back() != a[k])
        {
            ans.push_back(a[k]);
        }
    }

    for (int k = j; k < 5; k++)
    {
        if (ans.size() == 0 || ans.back() != b[k])
        {
            ans.push_back(b[k]);
        }
    }
}

int main()
{
    // fastio

    // test
    solve();

    return 0;
}