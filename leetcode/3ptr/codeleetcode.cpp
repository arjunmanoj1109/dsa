#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node* next;
    node(int x):val(x), next(nullptr){}
};
void deletenode(node* head){
    if (head== nullptr || head->next== nullptr){
        return ;
    }
    node* prev= head;
    node* temp= head->next;
    while(temp!= nullptr){
        if(prev->val == temp->val){
            node* duplicatenode= temp;
            temp=temp->next;
            prev->next=temp;
        } else{
            prev= temp;
            temp= temp->next;
        }
    }
}
void printlinkedlist(node* head){
    node* temp= head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    node* head= new node(1);
    head->next= new node(1);
    head->next->next= new node(2);
    head->next->next->next= new node(3);
    head->next->next->next->next= new node(3);
    head->next->next->next->next->next= new node(4);
    head->next->next->next->next->next->next= new node(5);
    cout<<"before deleting the duplicates:";
    printlinkedlist(head);
    cout<<"after deleting the duplicates:";
    deletenode(head);
    printlinkedlist(head);
    return 0;
}