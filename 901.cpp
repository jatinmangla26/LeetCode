#include <bits/stdc++.h>
using namespace std;
stack<pair<int, int>> st;
int next(int price)
{
    int span = 1;
    while (!st.empty() && price >= st.top().first)
    {
        span += st.top().second;
        st.pop();
    }
    pair<int, int> p;
    p.first = price;
    p.second = span;
    st.push(p);
    return st.top().second;
}
int main()
{
}