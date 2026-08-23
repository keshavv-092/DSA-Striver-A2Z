#include<bits/stdc++.h>
using namespace std;
int fun(int mid , int N ,int n){
    long long ans = 1;
    for(int i=1; i<=N; i++){
        ans = ans*mid;
        if(ans > n) return 2;
    }
    if(ans==n) return 1;
    return 0;
}
int root(int n,int N){
    int low = 1;
    int high = n;
    while(low<=high){
        int mid = (low+high)/2;
        int midN = fun(mid,N,n);
        if(midN==1){
            return mid;
        }
        if(midN==0){
            low = mid+1;
        }
        else high = mid-1;
    }
    return -1;
}
int main(){
    int n = 16;
    int N = 4;
    cout << root(n,N); 
    return 0;
}