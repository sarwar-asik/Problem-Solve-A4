#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    long long int val;
    Node* next;
    Node(long long int val){
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail,long long int val){
  Node *newNode=new Node(val);

  if(head==NULL){
    head=newNode;
    tail = newNode;
    return;
  }
tail->next=newNode;
tail=tail->next;
};

// should fixed the Segmentation Fault 0.04s

 int main() {
    // main code here
    Node* head =NULL;
    Node* tail = NULL;

    long long int val1;
    long long int length1=0;
    while(true){
        cin >> val1;
        if(val1 ==-1){
            break;
        }
          insert_at_tail(head,tail,val1);
          length1++;
    }

        Node* temp = head;
        long long int flag=1;
        long long int val2;

// ! 2nd 
 long long int length2=0;
   while(true){
        cin >> val2;
         if(val2 ==-1){
            delete temp;
            break;
        }
           if(temp->val!=val2){
               flag =0;
            delete temp;

               break;
            }
       
        temp=temp->next;
        length2++;
        
    }

  // cout<<"closed"<<endl;
    if(flag==1 && length1 ==length2){
      cout<< "YES";
    }else{
      cout <<"NO";
    }

    return 0;
}