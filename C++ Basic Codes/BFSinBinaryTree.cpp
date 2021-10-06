#include<bits/stdc++.h>
using namespace std;

class node{
    
    public:
    
    int data;
    node*left;
    node*right;
    
    node(int d){
        left=NULL;
        right=NULL;
        data=d;
    }
};

node*BuildTree(){
    int d; 
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node * root =new node(d);
    root->left= BuildTree();
    root->right=BuildTree();
    return root;
}

//pre order  
void print (node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int height(node* root){
    if(root==NULL){
        return 0;
    }
    int ls=height(root->left);
    int rs=height(root->right);
    int n=(max(ls,rs))+1;
    return n;
}

void levelprint(node*root,int i){
    if(root==NULL){
        return;
    }
    if(i==1){
            cout<<root->data<<" ";
            return;
    }
    levelprint(root->left,i-1);
    levelprint(root->right,i-1);
}

void bfs(node * root){
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node * f=q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else
        {
            cout<<f->data<<" ";
            q.pop();

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
        
    }
}

int main(){
    node * root = BuildTree();
    //print (root);
    cout<<endl<<height(root)<<endl;
    bfs(root);

}
