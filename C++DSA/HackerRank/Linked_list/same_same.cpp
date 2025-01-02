#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;   // pointer of the next address
    Node* prev;   // pointer of the previous address
    Node(int val){
      this->val=val;
      this->next=NULL;
      this->prev=NULL;
    }
};
void print_forward(Node* head){
  Node* tmp = head;
  while(tmp!=NULL){
    cout << tmp->val<< " ";
    tmp = tmp->next;
  }
  cout <<endl;
};
void print_backward(Node* tail){
  Node* tmp = tail;
  while(tmp!=NULL){
    cout << tmp->val<< " ";
    tmp = tmp->prev;
  }
  cout <<endl;
};


void insert_at_tail (Node*&head, Node* &tail,int val){
  Node* newNode = new Node(val);
  if(head ==NULL){
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next= newNode;
  newNode->prev = tail;
  tail = newNode;
}



int main() {
    // main code here
    Node* head_1 =NULL;
    Node* tail_1 =NULL;
    long int length1=0;

    int val;
    while(true){
      cin >> val;
      if(val == -1) {break;};
         insert_at_tail(head_1,tail_1,val);
         length1++;
    }

//   print_forward(head_1);

 int flag=1;
  int length2=0;
  int val2;
  Node* temp = head_1;

    Node* head_2 =NULL;
  Node* tail_2 =NULL;
  while(true){
      cin >> val2;
      if(val2 == -1) {break;};
      if(length2==length1){
          flag=0;
          break;
      }

      if(temp->val!=val2){
          flag =0;
          break;
      }

         insert_at_tail(head_2,tail_2,val2);
         length2++;
         temp=temp->next;

    }

  if(flag==1 && length2==length1){
      cout << "YES" << endl;
  }else{
      cout << "NO" << endl;
  }
//   Node* head_2 =NULL;
//   Node* tail_2 =NULL;
//   int val2;
//   while(true){
//       cin >> val2;
//       if(val2 == -1) {break;};
//          insert_at_tail(head_2,tail_2,val2);
//     }
//   print_forward(head_2);





   return 0;
} 