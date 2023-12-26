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
    vector<int> a{2,1,5,4,3,0,0};
    int n = a.size();
    int ind = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            ind = i;
            break;
        }
    }

    if (ind == -1)
    {
        reverse(a.begin(), a.end());
        for (auto it : a)
        {
            cout << it << " ";
        }
        nn;
    }
    else
    {
        for (int i = n - 1; i > ind; i--)
        {
            if (a[i] > a[ind])
            {
                swap(a[i], a[ind]);
                break;
            }
        }

        reverse(a.begin() + ind + 1, a.end());
        for (auto it : a)
        {
            cout << it << " ";
        }
        nn;
    }
}

int main()
{
    fastio

        //test
        solve();

    return 0;
}