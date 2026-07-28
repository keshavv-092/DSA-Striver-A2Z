#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    unordered_set<int> s(nums.begin(), nums.end());
    int longest = 1;
    for (auto it : s)
    {
        if (s.find(it - 1) == s.end())
        {
            int x = it;
            int count = 1;
            while (s.find(x + 1) != s.end())
            {
                count++;
                x++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}
int main(){
    int n;
    cout << "enter size of array ";
    cin >> n;
    vector<int> a(n);
    cout << "enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    longestConsecutive(a);
    return 0;
}
