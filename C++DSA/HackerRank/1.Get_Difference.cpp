#include<bits/stdc++.h>
using namespace std;
// https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-06/challenges/get-difference/submissions/code/1386804999
class Node
{
    public:
    int val;
    Node* next;   // pointer of the next address
    Node(int val){
      this->val=val;
      this->next=NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail,int val){
  Node *newNode=new Node(val);

  if(head==NULL){
    head=newNode;
    tail = newNode;
    return;
  }

tail->next=newNode;
tail=tail->next;
};


void min_val_func(Node*head){
    // cout<<"head value= "<<head->val<< endl;
int max= INT_MIN, min = INT_MAX;
for(Node*i =head;i!=NULL;i=i->next){
    // cout<< " i= "<< i->val<< endl;
    if(i->val>max){
        max=i->val;
    }
    if(i->val<min){
        min= i->val;
    }
}
int difference = max-min;
cout<<difference;
// cout << "max= "<<max << " Min= " << min;


};

int main() {
  
  Node* head= NULL;
  Node* tail= NULL;
  int val;
   while(true){  //! O(N)
    cin>> val;
    if(val ==-1){
        break;
    }
    insert_at_tail(head,tail,val); //!O(1)
  }

  min_val_func(head);


    return 0; 
}  