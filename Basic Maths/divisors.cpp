#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    vector<int> v;
    cout << "enter a number" << endl;
    cin >> n ;
    cout << "All divisors of " << n << " are" << endl;
    for(int i =1; i<sqrt(n) ; i++){
        if(n%i == 0){
            v.push_back(i);
            if(n/i != i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin() , v.end());
    for(auto i :v){
        cout << i << endl;
    }
    return 0;
}