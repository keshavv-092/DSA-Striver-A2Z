#include<bits/stdc++.h>
using namespace std;
int CheckTime(vector<int>& Board , int time){
    int CountPainter = 1;
    int CountTime = 0;
    for(int i = 0 ; i<Board.size() ; i++){
        if(Board[i]+CountTime<=time){
            CountTime+=Board[i];
        }
        else{
            CountPainter++;
            CountTime = Board[i];
        }
    }
    return CountPainter;
}
int PaintTime(vector<int>& Board , int painter){
    int low = *max_element(Board.begin(),Board.end());
    int high = accumulate(Board.begin(), Board.end(),0);
    while(low<=high){
        int mid = (low+high)/2;
        if(CheckTime(Board , mid)>painter){
            low = mid +1;
        }
        else high = mid -1 ;
    }
    return low;
} 
int main(){
    vector<int> boards = {10, 20, 30, 40};
    int k = 2;
    cout << PaintTime(boards , k) << endl ; 
    return 0 ;
}