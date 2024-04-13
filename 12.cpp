#include <bits/stdc++.h>
using namespace std;
string intToRoman(int num)
{
    vector<int> numbers = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    vector<string> sym = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int i = 12;
    string ans = "";
    while (num > 0)
    {
        int div = num / numbers[i];
        num = num % numbers[i];
        while (div--)
        {
            ans += sym[i];
        }
        i--;
    }
    return ans;
}
int main()
{
}