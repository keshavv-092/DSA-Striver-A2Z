#include<bits/stdc++.h>
using namespace std;
int maxSubArray(int nums[], int n) {
        long long sum =0 ,maxi = LONG_MIN;
        for(int i =0; i<n; i++){
            sum +=nums[i];
            if(sum>maxi){
                maxi = sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
int main(){
    int n;
    cout << "enter size of array ";
    cin >> n;
    int a[n];
    cout << "enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    maxSubArray(a ,n);
    return 0;
}