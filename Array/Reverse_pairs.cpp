#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &v, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high)
    {
        if (v[left] > v[right])
        {

            temp.push_back(v[right]);
            right++;
        }
        else
        {
            temp.push_back(v[left]);
            left++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(v[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(v[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        v[i] = temp[i - low];
    }
}
int reversePairs(vector<int> &v, int low, int mid, int high)
{
    int count = 0;
    int right = mid + 1;
    for (int i = low; i <= mid; i++)
    {
        while (right <= high && v[i] > 2LL * v[right])
            right++;
        count = right - (mid + 1);
    }
    return count;
}
int merge_sort(vector<int> &v, int low, int high)
{
    int count = 0;
    if (low >= high)
        return count;
    int mid = (low + high) / 2;
    count += merge_sort(v, low, mid);
    count += merge_sort(v, mid + 1, high);
    count += reversePairs(v, low, mid, high);
    merge(v, low, mid, high);
    return count;
}
int reversepairs(vector<int> &a, int n)
{
    return merge_sort(a, 0, n - 1);
}
int main()
{
    vector<int> a = {2, 4, 3, 5, 1};
    cout << reversepairs(a, a.size());
    return 0;
}
