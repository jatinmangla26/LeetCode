#include <bits/stdc++.h>
using namespace std;
int getResult(int n)
{
    int result = 0;
    while (n > 9)
    {
        int x = n % 10;
        result += (x * x);
        n = n / 10;
    }
    result += (n * n);
    return result;
}
bool isHappy(int n)
{
    set<int> st;
    while (n != 1)
    {
        if (st.find(n) != st.end())
            return false;
        st.insert(n);
        n = getResult(n);
    }
    return true;
}
int main()
{
    cout << getResult(6);
}