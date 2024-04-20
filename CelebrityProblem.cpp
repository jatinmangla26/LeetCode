#include <bits/stdc++.h>
using namespace std;
int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
        s.push(i);
    while (s.size() > 1)
    {
        if (s.empty())
            return -1;
        int x = s.top();
        s.pop();
        int y = s.top();
        s.pop();
        if (M[x][y] == 1 and M[y][x] == 0)
            s.push(y);
        else if (M[x][y] == 1 and M[y][x] == 1)
            s.push(x);
    }
    int celeb = s.top();
    s.pop();
    for (int i = 0; i < n; i++)
    {

        if (i != celeb and M[celeb][i] == 0)
            return -1;
    }
    return celeb;
}
int main()
{
}