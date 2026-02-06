#include <iostream>
using namespace std;
//node 
class Node{ //creating a node 
 public:
 int data;                    //create a data for forming node
 Node *next_ptr_obj;          //create a pointer to store the next value in the node
 Node(int value){
  data=value;                  //passing each  (values) inside the class got from the user
  next_ptr_obj=nullptr;       //initialize the next as null
 };

};
//another class to access the nodes and store them
class linked_list{
  public:
  Node *head;//the first
  linked_list(){
    head=nullptr;
  }
  void insert_at_the_end(int value){
    Node *newnode =new Node(value);
    if(head==nullptr){
      head=newnode;
      return;
    }
    Node*temp=head;
    while(temp->next_ptr_obj!=nullptr){
      temp=temp->next_ptr_obj;
    }
    temp->next_ptr_obj=newnode;
  };
   
};
int main() {
    // Write C++ code here
  Node obj1(90);
  cout<<obj1.next_ptr_obj;

    return 0;
}
