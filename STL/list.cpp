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
    // list
    list<int> ls;
    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5);   //{5,2,4}
    ls.emplace_front(); //{2, 4};
    //rest function are same as vector
    return 0;
}