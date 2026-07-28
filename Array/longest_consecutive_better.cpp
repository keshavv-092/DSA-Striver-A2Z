#include<bits/stdc++.h>
using namespace std;
int consecutive(vector<int>a,int n){
    sort(a.begin(), a.end());
    int longest = 1;
    int count =0;
    int lastsmaller = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]-1==lastsmaller){
            count++;
            lastsmaller = a[i];
        }
        else if(a[i]-1!=lastsmaller){
            count =1;
            lastsmaller = a[i];
        }
        longest = max(longest , count);
    }
    cout << longest ;
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
    consecutive(a,n);
    return 0;
}