#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 0; i < intervals.size(); i++)
    {
        if (ans.empty() || intervals[i][0] > ans.back()[1])
        {
            ans.push_back(intervals[i]);
        }
        else
        {
            ans.back()[1] = max(intervals[i][1], ans.back()[1]);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> v ={{1,2},{23,25},{2,6},{4,5},{22,30}};
    merge(v);
    return 0;
}