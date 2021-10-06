#include <iostream>
using namespace std;

class Node
{
  public:
   int key;
   Node *left;
   Node *right;

   Node(int key){
       this->key = key;
       left = right  = NULL;
   }
};

Node* sortedArrayToBST(vector<int> arr, int start, int end) 
{ 
    //Return Null if s > e, because no array elements are there
    if (start > end) 
        return NULL; 
  
    /* Get the middle element and make it root */
    int mid = (start + end)/2; 
    Node *root = new Node(arr[mid]); 
  
    //create left & right subtrees recursively
    root->left = sortedArrayToBST(arr, start, mid - 1); 
    root->right = sortedArrayToBST(arr, mid + 1, end); 

    return root; 
} 

Node* insert(Node * root, int key){
	if(root==NULL){
		return new Node(key);
	}

	//rec case 
	if(key < root->key){
		root->left = insert(root->left,key);
	}
	else{
		root->right = insert(root->right,key);
	}
	return root;

}

bool search(Node * root, int key,int){
	//Homework
	if(root == NULL){
        return false;
    }
    if(root->key == key){
        return ;
    }
    
    if(root->key < key){
        return search(root->right,key);
    }
    else{
        return search(root->left,key);
    }

}

void printInOrder(Node *root){
	if(root==NULL){
		return;
	}
	//left, root, right
	printInOrder(root->left);
	cout << root-> key <<" ";
	printInOrder(root->right);
}


int main(){

	Node * root = NULL;
	int arr[] = {8,3,10,1,6,14,4,7,13};

	for(int x : arr){
		root = insert(root,x);
	}
	printInOrder(root);
    cout<<"\n"<<search(root,8);
	return 0;
}