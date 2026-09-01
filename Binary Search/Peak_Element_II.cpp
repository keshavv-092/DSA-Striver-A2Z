#include <bits/stdc++.h>
using namespace std;
int maxIndex(vector<vector<int>> &mat, int n, int m, int col)
{
    int maxValue = -1;
    int index = -1;
    for (int i = 0; i < m; i++)
    {
        if (mat[i][col] > maxValue)
        {
            maxValue = mat[i][col];
            index = i;
        }
    }
    return index;
}
vector<int> findPeakGrid(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int MaxRowIndex = maxIndex(mat, n, m, mid);
        int left = mid - 1 >= 0 ? mat[MaxRowIndex][mid - 1] : -1;
        int right = mid + 1 < n ? mat[MaxRowIndex][mid + 1] : -1;
        if (mat[MaxRowIndex][mid] > left && mat[MaxRowIndex][mid] > right)
        {
            return {MaxRowIndex, mid};
        }
        else if (mat[MaxRowIndex][mid] < left)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return {-1, -1};
}
int main(){
    vector<vector<int>> v = {{1,4},{3,2}};
    vector<int> ans = findPeakGrid(v);
    for(int i =0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
    return 0 ;
}