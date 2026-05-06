#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertb(int data, Node * &head){
    Node * newnode = new Node(data);
    newnode->next=head;
    head=newnode;
}

void inserte(int data, Node *&head){
    Node * newNode = new Node(data);
    
    if (head==NULL){
        head=newNode;
        return;
    }
    
    newNode->next=NULL;
    Node * temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertpos(int data,int pos,Node *&head){
    Node * newNode=new Node(data);
    Node * temp=head;
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Out of bounds"<<endl;
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;

}
void disp(Node *head){
    Node * temp = head;
    cout<<"head->";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}

int main(){
    Node * head = new Node(5);
    Node * second = new Node(10);
    Node * third = new Node (15);

    head->next=second;
    second->next=third;
    int data=30;
    int pos=2;
    disp(head);
    insertb(data,head);    disp(head);
    inserte(data,head);
    insertpos(34,2,head);
    disp(head);
    return 0;
}