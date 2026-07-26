#include<bits/stdc++.h>
using namespace std;
void unionn(int a[] ,int n1, int b[],int n2){
    int i=0;
    int j=0;
    vector<int> uni;
    while(i< n1 && j<n2){
        if(a[i]<=b[j]){
            if(uni.size()==0 || uni.back()<a[i]){
                uni.push_back(a[i]);
            }
            i++;
        }
        else{
            if(uni.size()==0 || uni.back()<b[j]){
                uni.push_back(b[j]);
            }
            j++;
        }
    }
    for(auto it:uni){
        cout << it << endl;
    }
}
int main(){
    int n1;
    cout << "enter size of array ";
    cin >> n1;
    int a[n1];
    cout << "enter elements ";
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    int n2;
    cout << "enter size of array ";
    cin >> n2;
    int b[n2];
    cout << "enter elements ";
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    unionn(a,n1,b,n2);
    return 0;
}