#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++)
    {
        if (i == 0)
            ans.push_back({1});
        else if (i == 1)
            ans.push_back({1, 1});
        else
        {
            ans.push_back({1});
            for (int j = 0; j < ans[i - 1].size() - 1; j++)
            {
                int sum = ans[i - 1][j] + ans[i - 1][j + 1];
                ans[i].push_back(sum);
            }
            ans[i].push_back(1);
        }
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter number of Rows " ;
    cin >> n;
    generate(n);
    return 0;
}