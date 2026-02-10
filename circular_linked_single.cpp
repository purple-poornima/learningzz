#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node (int value){
        data=value;
        next=nullptr;
    }
};
class circle_linked{
    public:
    node *head;
   circle_linked(){
       head=nullptr;
   }
   void insert_at_end(int value){
       node *newnode=new node(value);
       if(head==nullptr){
           head=newnode;
           newnode->next=head;
           return;
       }
       node *temp=head;
       
       while(temp->next!=head){
           temp=temp->next;
       }
       temp->next=newnode;
    newnode->next=head;
   }
   void display(){
       node *temp=head;
      do{
          cout<<temp->data<<" ";
          temp=temp->next;
          
      }
       while(temp!=head);
         cout<<endl;
       
   }
};
int main() {
   
 circle_linked obj;
 obj.insert_at_end(90);
  obj.insert_at_end(80);
 obj.display();
    return 0;
}
