#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    long long  int val;
    Node* next;
    Node(long long  int val){
        this->val=val;
        this->next=NULL;
    }

};
void insert_at_tail (Node * &head,Node*&tail,long long  int val){

        Node * newNode = new Node(val);
        if(head==NULL){
         head= newNode;
         tail = newNode;
         return;
        }
        tail->next=newNode;
        tail = tail->next;

};

void print_linked_list(Node*head,long long  int V){
  Node*temp= head;

 long long  int length =0;
  int is_matched=0;
//   ! TTL
  while(temp!=NULL){
    //   cout<<temp->val <<" ";
    if(temp->val==V){
        cout<< length <<endl;
        is_matched=1;
        break;
    }
      temp=temp->next;
      length=length+1;
  }  
//   cout << endl;
    if(is_matched==0){
        cout<< -1<< endl;
    }

};
int main() {
    // main code here
  
    long long int T ;
    cin >> T;

    
    while(T--){
       Node* head= NULL;
       Node* tail = NULL;
        // cout <<T << "yes"<<endl;
       long long  int val;
        while(true){
            cin>> val;
           if(val ==-1){
             break;
            }
            insert_at_tail(head,tail,val);
        }
      long long   int V;
        cin >> V;
        print_linked_list(head,V);
        while(head!=NULL){
          Node* tempDel = head;
          head =head->next;
          delete  tempDel;
        }

    }
    
    
    return 0;
}