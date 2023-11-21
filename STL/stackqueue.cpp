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
    // stack

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(4);
    st.emplace(5);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;

    stack<int> s1, s2;
    s1.swap(s2);

    // queue

    cout << "queue" << endl;
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(6);

    q.back() += 5;
    cout << q.back() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;

    // priority queue
    priority_queue<int> pq; // stored in descending order
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10); //{10,8,5,2}

    // minimum heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);
    pq1.push(2);
    pq1.push(8);
    pq1.emplace(10); //{2,5,6,10}
    return 0;
}