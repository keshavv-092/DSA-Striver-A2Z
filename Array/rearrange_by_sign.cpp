#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int positive=0 , negative=1;
        for(int i=0; i<nums.size();i++){
            if(nums[i]<0){
                ans[negative]=nums[i];
                negative +=2;
            }
            else{
                ans[positive]=nums[i];
                positive+=2;
            }
        }
        return ans;
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
    rearrangeArray(a);
    return 0;
}