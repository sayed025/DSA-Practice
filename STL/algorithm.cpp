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

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
    return false;
}

int main()
{
    sort(a, a + n);           // for array
    sort(v.begin(), v.end()); // for vector
    sort(a + 2, a + 4);
    sort(a, a + n, greater<int>); // descending order

    // sort it accoding to the second element
    // if second element is same, then sort
    // it according to the first element but in descending

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(a, a + n, comp);

    int num = 7;
    int cnt = __builtin_popcount(7); // return the number of set bits

    long long num = 54546564614;
    int cnt = __builtin_popcountll();

    string s = "123";
    sort(s.begin(), s.end()); // should sort before
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *maxi_element(a, a + n);

    return 0;
}