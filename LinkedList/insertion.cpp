#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int info;
    Node *next;
    Node(int data, Node *next1)
    {
        info = data;
        next = next1;
    }
    Node(int data)
    {
        info = data;
        next = NULL;
    }
};
Node *convertToLL(vector<int> v)
{
    Node *head = new Node(v[0]);
    Node *mover = head;
    for (int i = 1; i < v.size(); i++)
    {
        Node *temp = new Node(v[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void traverse(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *InsertAtHead(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}
Node *InsertAtTail(Node *head, int val)
{
    if (head == NULL)
        return new Node(val);
    Node *New_node = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = New_node;
    return head;
}
Node *InsertATK(Node *head, int k, int val)
{
    if (head == NULL)
    {
        if (k == 1)
            return new Node(val);
    }
    if (k == 1)
        return new Node(val);
    Node *temp = head;
    int cnt = 0;
    while(temp!=NULL){
        cnt++;
        if(cnt == k-1){
            Node *new_node = new Node(val);
            new_node->next = temp->next;
            temp->next = new_node;
        }
        temp = temp->next;
    }
    return head;
}
Node *InsertBeforeVal(Node *head , int val,int x){
    if (head == NULL)
    {
            return new Node(val);
    }
    Node *temp = head;
    while(temp->next->info != val){
        temp = temp->next;
    }
    Node *new_node = new Node(x);
    new_node->next = temp->next;
    temp->next = new_node;
    return head;
}
int main()
{
    vector<int> v = {2, 43, 65, 8723, 8};
    Node *head = convertToLL(v);
    head = InsertAtHead(head, 100);
    head = InsertAtTail(head, 20);
    head = InsertATK(head,4,234);
    head = InsertBeforeVal(head,8,300);
    traverse(head);
    return 0;
}