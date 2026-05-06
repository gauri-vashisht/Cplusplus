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
void disp(Node * head){
    Node* temp=head;
    cout<<"head->";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void delb(Node * &head){
    Node * temp= head;
    head=head->next;
    delete temp;
}
void dele(Node * &head){
    int total=3;
    Node * temp = head;
    for(int i=1; i<total-1; i++){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}
void delp(Node * &head, int target){
    Node * temp=head;
    int pos=0;
    while(temp!=NULL){
        if(temp->data==target)
            break;
        else{
            temp=temp->next;
            pos++;}
    }
    Node * tempp=head;
    for(int i=1; i<pos; i++){
        tempp=tempp->next;
    }
    Node * todelete= tempp->next;
    tempp->next=todelete->next;
    delete todelete;
}
int main(){
    Node * head = new Node(1);
    Node * second = new Node(2);
    Node * third = new Node(3);
    Node * fourth = new Node(4);
    head->next=second;
    second->next=third;
    third->next=fourth;
    disp(head);
    delb(head);
    disp(head);
    dele(head);
    disp(head);
    delp(head, 3);
    disp(head);
    return 0;
}
