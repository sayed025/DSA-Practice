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

    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3); //{1,2,3,4}

    auto it = st.find(3);
    auto it = st.find(6); // will return st.end()

    st.erase(5); // erase 5 take logarithmic time

    auto it3 = st.find(2);
    st.erase(it3); // erase 2

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // delete between 2 to 4

    // multi set
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); //{1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only single one erased
    ms.erase(ms.find(1));
    // it1 = ms.find(1);
    // advance(it1, 2);
    // cout << "advance " << *it1 << endl;
    ms.erase(ms.find(1), ms.find(1)+2); // erase the range

    // unordered set

    unordered_set<int> ust;
    // lower bound and upper bound function does not work
    // most cases it has a better time complexity. does store in sorted order

    return 0;
}