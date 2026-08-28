#include<bits/stdc++.h>
using namespace std;
bool CheckPages(vector<int>& books , int students , int pages){
    int countPages = 0;
    int countStd = 1;
    for(int i =0; i<books.size(); i++){
        if(books[i]+countPages<=pages){
            countPages+=books[i];
        }
        else{
            countStd++;
            countPages = books[i];
        }
    }
    return countStd>students;
}
int BookAllocation(vector<int>& books, int students){
    if(books.size()<students) return -1;
    int low = *max_element(books.begin(),books.end());
    int high = accumulate(books.begin(), books.end(), 0);
    while(low<=high){
        int mid = (low+high)/2;
        if(CheckPages(books,students,mid)){
            low = mid+1;
        }
        else high = mid-1;
    }
    return low;
}
int main(){
    vector<int> v = {12,34,67,90};
    int m = 2;
    cout << BookAllocation(v,m) << endl;
    return 0; 
}