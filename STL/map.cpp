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

int main()
{
    map<int, int> mp;
    map<int, pair<int, int>> mp1;
    map<pair<int, int>, int> mp2;

    mp[1] = 2;
    mp.insert({2, 4});

    mp2[{2, 3}] = 10;

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    auto it = mp.find(2); //if two is not present it will point to end
    cout << (*it).second;

    auto it = mp.lower_bound(2);
    auto it = mp.upper_bound(3);

    return 0;
}