#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int n = s.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        while (i < j and !isalnum(s[i]))
            i++;
        while (i < j and !isalnum(s[j]))
            j--;
        if (tolower(s[i]) != tolower(s[j]))
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
}