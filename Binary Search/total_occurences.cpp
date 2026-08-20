#include<bits/stdc++.h>
using namespace std;
int firstbinary(vector<int>v , int x){
    int low = 0;
    int high = v.size()-1;
    int first = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]==x){
            first = mid;
            high = mid-1;
        }
        else if(v[mid]<x) low = mid+1;
        else high = mid-1;
    }
    return first ;
}
int lastbinary(vector<int>v , int x){
    int low = 0;
    int high = v.size()-1;
    int last = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]==x){
            last = mid;
            low = mid+1;;
        }
        else if(v[mid]<x) low = mid+1;
        else high = mid-1;
    }
    return last ;
}
int count(vector<int>v , int x){
    int first = firstbinary(v,x);
    if(first ==-1) return 0;
    int last = lastbinary(v,x);
    pair<int,int> p = {first,last};
    return p.second - p.first +1; 
}
int main(){
    vector<int> v = {5,7,7,8,8,10};
    int x = 8;
    cout << "Total Occurences are :" << count(v,x);
    return 0;
}