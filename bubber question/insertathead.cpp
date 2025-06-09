#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

//constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

void insertAtHead(Node* &head, int d)
{
Node* temp=new Node(d);
temp->next=head;
temp=head;

}
void insertATTail(Node* Tail,int d)
{
    Node* temp=new Node(d);
    Tail->next=temp;
    Tail=temp;


}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;

    }
    cout<<endl;

}

int main()
{
    Node* node1=new Node(10);
    //cout<< node1-> data <<endl;
    //cout<<node1->next<<endl;

    Node* head=node1;
    Node* Tail=node1;
    print(head);

    //insertAtHead(head,12);
    //print(head);

    //insertAtHead(head,15);
    //print(head);

    insertATTail(head,12);
    print(Tail);

    insertATTail(head,15);
    print(Tail);

    return 0;
}
