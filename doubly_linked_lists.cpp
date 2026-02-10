#include <iostream>
using namespace std;
class node{
  public:
  int data;
  node *prev;
  node *next;
  node(int value){
    data=value;
    prev=nullptr;
    next=nullptr;
  }
};
class linked_lists{
  public:
  node * head;
  node * tail;
  linked_lists(){
    head=nullptr;
    tail=nullptr;
  }
  void insert_at_end(int value){
    node *newnode=new node(value);
    if(head==nullptr){
      head=newnode;
      tail=newnode;
      return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
  
  }
  void display(){
    node *temp=head;
    while(temp!=nullptr){
      cout<<temp->prev<<"|";
        cout<<temp->data<<"|"<<temp->next<<""<<endl;
        temp=temp->next;
    }
  }
};
int main(){
  linked_lists obj;
  obj.insert_at_end(90);
  obj.insert_at_end(80);
  obj.display();

}
