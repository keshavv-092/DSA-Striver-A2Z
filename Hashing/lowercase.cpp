//only for lower case  a to z 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout << "enter a string ";
    cin >> s;
    int hash[26] = {0};
    for(int i =0; i<s.size(); i++){
        hash[s[i] - 'a']+=1;
    }
    int q;
    cout<< "enter number of queries ";
    cin >> q;
    while(q--){
        char c;
        cout << "enter a character ";
        cin >> c;
        cout << hash[c-'a'] << endl;

    }
    return 0;
}