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
    vector<int> a{5, 8, 3, 2, 1, 4};
    int n = a.size();
    int longest = 1;
    unordered_set<int> st;

    for (auto it : a)
    {
        st.insert(it);
    }

    for (auto it : st)
    {

        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;

            while (st.find(x + 1) != st.end())
            {
                cnt++;
                x++;
            }

            longest = max(longest, cnt);
        }
    }

    cout << longest << endl;
}

int main()
{
    fastio

    // test
    solve();

    return 0;
}