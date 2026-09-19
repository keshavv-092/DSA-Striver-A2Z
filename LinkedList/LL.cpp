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
int main(){
    vector<int> v = {2,4,6,8,10};
    Node* y = new Node(v[0]);
    cout<< y << endl;
    cout<< y->data << endl;
    cout<< y->next << endl;
    return 0;
}