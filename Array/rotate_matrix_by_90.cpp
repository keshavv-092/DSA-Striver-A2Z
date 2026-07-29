#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main() {
    vector<vector<int>> matrix = {{0,1,2,},{3,4,5,},{1,3,1,}};
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout<<endl;
    rotate(matrix);
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
