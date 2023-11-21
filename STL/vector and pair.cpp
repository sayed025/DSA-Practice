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
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    // 1. pair
    // pair in a pair
    pair<int, pair<int, int>> p = {1, {3, 4}};
    cout << p.first << " " << p.second.first << " " << p.second.second << endl;

    // array of pair
    pair<int, int> ara[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << ara[1].first << endl;

    // 2.vector
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v(5, 100); // vector of size 5 with value 100
    vector<int> v1(5);     // vector of size 5 with 0 or garbage value
    vector<int> v2(v1);    // copy v1 into v2
    vector<int>::iterator it = v.begin();

    // delete funtion
    // deleting a single element
    v.erase(v.begin() + 1);
    // deleting within a range
    // [10,20,30,40] if i want to delte 20 to 30
    v.erase(v.begin() + 1, v.begin() + 3);

    // insert function

    v.insert(v.begin(), 100);       // insert 100 at first
    v.insert(v.begin() + 1, 2, 10); // inserting 10 two times at after 0th index

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end()); // inserting copy vector at the begining of v vector

    // swap two vector
    v1.swap(v2);

    v.clear(); // erases the entire vector and make empty vector

    v.empty(); // returns true if vector is empty
    return 0;
}