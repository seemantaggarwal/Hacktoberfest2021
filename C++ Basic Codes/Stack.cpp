#include <iostream>
using namespace std;
  
// class to represent a stack node
class StackNode {
   public:
   int data;
   StackNode* next;
   };
  
StackNode* newNode(int data) {
   StackNode* stackNode = new StackNode();
   stackNode->data = data;
   stackNode->next = NULL;
   return stackNode;
   }
  
int isEmpty(StackNode *root) {
   return !root;
   }

// push implementation 
void push(StackNode** root, int new_data){
   StackNode* stackNode = newNode(new_data);
   stackNode->next = *root;
   *root = stackNode;
   cout<<new_data<<endl;
   }

// pop implementation
int pop(StackNode** root){
   if (isEmpty(*root))
   return -1;
   StackNode* temp = *root;
   *root = (*root)->next;
   int popped = temp->data;
   free(temp);
  
   return popped;
}

// peek implementation
int peek(StackNode* root)
{
   if (isEmpty(root))
   return -1;
   return root->data;
}