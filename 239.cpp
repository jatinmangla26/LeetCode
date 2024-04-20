#include <bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
   int size=nums.size();
    int i=0;
    int j=0;
    deque<int>ls;
    vector<int>ans;
    while(j<size)
        {
           while(ls.back()<nums[j] && ls.size()>0)
           ls.pop_back();
           ls.push_back(nums[j]);
            if(j-i+1<k)
            j++;
            else 
            {
               ans.push_back(ls.front());
                if(nums[i]==ls.front())
                ls.pop_front();
                i++;
                j++;//sliding the window
            }
        }
        return ans;
}
int main()
{
}