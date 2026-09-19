#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* ConvertArr2LL(vector<int>v){
    Node* head = new Node(v[0]);
    Node* mover = head;
    for(int i=1; i<v.size(); i++){
        Node* temp = new Node(v[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int main(){
    vector<int> v = {12,4,6,8,10};
    Node* head = ConvertArr2LL(v);
    cout << head->data << endl; 
    return 0;
}