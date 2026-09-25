#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int info;
    Node *next;
    Node(int data1, Node *next1)
    {
        info = data1;
        next = next1;
    }
    Node(int data1)
    {
        info = data1;
        next = nullptr;
    }
};
Node *DeleteHead(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty Linked List";
        return head;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *DeleteTail(Node *head){
    if(head == NULL){
        cout<<"empty Linked List";
        return head;
    }
    Node *temp=head;
    while(temp->next->next){
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}
Node *DeleteSpecific(Node *head , int pos){
    if(head == NULL){
        cout << "Empty Linked List ";
        return head;
    }
    Node *temp = head;
    for(int i=1; i<pos-1; i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
Node* convertToLL(vector<int>v){
    Node *head = new Node(v[0]);
    Node *mover = head;
    for(int i=1; i<v.size(); i++){
        Node *temp = new Node(v[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* DeleteVal(Node *head , int val){
    if(head == NULL){
        cout << "Empty Linked List ";
        return head;
    }
    while(head!=NULL && head->info == val){
        Node *todelete = head;
        head = head->next;
        delete todelete;
    }
    if(head == NULL) return head;
    Node *temp = head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->next->info == val){
            temp->next = temp->next->next;
        }
        else temp = temp->next;
    }
    return head;
}
void traverse(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->info<<" ";
        temp = temp->next;
    }
    cout <<endl;
}
int main(){
    vector<int> v = {2,3,4,5,10,20};
    Node *head = convertToLL(v);
    head = DeleteSpecific(head,2);
    head = DeleteVal(head,10);
    traverse(head);
}