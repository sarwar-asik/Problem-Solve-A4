#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
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
void print_linked_list(Node*head){
  Node*temp= head;
  
  while(temp!=NULL){
      cout<<temp->val<<endl;
      temp=temp->next;
  }  
};
int main() {
    // main code here
    Node* head =NULL;
    Node* tail = NULL;

    int val1,val2;
    while(true){
        cin >> val1;
        if(val1 ==-1){
            break;
        }
          insert_at_tail(head,tail,val1);
    }
    print_linked_list(head);
    //     Node* temp = head;
    //     int flag=1;
    //   while(true){
    //     cin >> val2;
    //         if(temp->val!=val2){
    //            flag =0;
    //            break;
    //         }
    //     if(val2 ==-1){
    //         break;
    //     }
        
    //     //   insert_at_tail(head,tail,val2);
    // }

    // if(flag==1){
    //   cout<< "Yes";
    // }else{
    //   cout <<"NO";
    // }

    return 0;
}