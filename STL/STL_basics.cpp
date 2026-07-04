#include<bits/stdc++.h>
using namespace std;
// =======PAIRS=======
void pairs(){
    pair<int, int> p = {1,2};
    cout << p.first << " " << p.second;
    cout << endl;
    pair<int , pair<int ,int>> p1 = {1 , p};
    cout << p1.first << " " << p1.second.first << endl;
    pair<string , int> p2 = {"STL" , 1};
    cout<< p2.first << " " << p2.second << endl;
    pair<int , int > arr[] = {{1,2} , {3,4} , {5,6}};
    cout << arr[1].first;
}
// =======VECTORS=======
void vectorss(){
    vector<int> v ;
    v.push_back(2);
    v.emplace_back(4);
    vector<pair<int , int> > v1;
    v1.push_back({1,100});
    v1.emplace_back(2,200);
    cout << v[0] << " " << v1[1].second << endl;
    vector<int> v2(5,20);
    cout << v2[3] << endl ; 
    vector<int > v3 = {20,30,40,50,70};
    vector<int>:: iterator i = v3.begin(); // points at first element of vector 
    cout << *(i) << endl;
    i++;
    cout << *(i) << endl;
    vector<int>:: iterator j = v3.end(); // points at memory after the last element and access last element we have to -1 from it
    j--;
    cout << *(j) << endl;


}
int main(){
    //pairs();
    vectorss();
    return 0;
}