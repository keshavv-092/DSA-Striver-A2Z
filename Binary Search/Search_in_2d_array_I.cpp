#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    if (matrix.empty() || matrix[0].empty())
        return false;
    int m = matrix.size();
    int n = matrix[0].size();
    int low = 0;
    int high = (m * n) - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int row = mid / n, col = mid % n;
        if (matrix[row][col] == target)
            return true;
        else if (matrix[row][col] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}
int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int k = 16;
    cout << searchMatrix(matrix , k) << endl ;
    return 0;
}