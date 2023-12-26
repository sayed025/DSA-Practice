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
    vector<int> a{5, 4, 3};
    int n = a.size();
    int count = 0;
    int maxi = INT_MIN;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            ans.push_back(a[i]);
            count++;
            maxi = a[i]; 
        }
    }

    sort(ans.begin(), ans.end());

    for (auto it : ans)
    {
        cout << it << " ";
    }

    cout << endl;
}

int main()
{
    fastio

        //test
        solve();

    return 0;
}