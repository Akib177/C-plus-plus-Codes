#include<iostream>
#include<cstring>
using namespace std;

struct  Node{
string data;
Node* left;
Node* right;

Node(string value){
    data=value;
    left=nullptr;
    right=nullptr;
}
};

Node* insert (Node* root, string value){
    if (root==nullptr){
        return new Node(value);
    }

    if (root->data>value){
    root->left = insert(root->left, value);
    }

    else{
    root->right = insert (root->right, value);
    }
    return root;
}

Node* search (Node* root, string value){

    if (root == nullptr || root->data == value ){
        return root ;
    }

    if (root->data>value) {
        return search(root->left, value);
    }
    else  {
        return search(root->right, value);
    }
}

void infixTraversal (Node* root){
    if(root!= nullptr){
        infixTraversal(root->left);
        cout<<root->data<<" "<<endl;
        infixTraversal(root->right);
    }
}

void prifixTraversal (Node* root){
    if(root!= nullptr){
             cout<<root->data<<" "<<endl;
        prifixTraversal(root->left);

        prifixTraversal(root->right);
    }
}
void postfixTraversal (Node* root){
    if(root!= nullptr){
        postfixTraversal(root->left);
        postfixTraversal(root->right);
         cout<<root->data<<" "<<endl;
    }
}

int main(){
    Node* root = nullptr;
    root=insert(root, "adnan");
    root=insert(root, "akib");
    root=insert(root, "khan");
    root=insert(root, "aiub");
    root=insert(root, "dhaka");
    root=insert(root, "tangail");

    Node* a = search(root,"akib");
    if (a!=nullptr) {
        cout<<"Found: "<<a->data<<endl;
    }
     else{
        cout<<"Not Found"<<endl;
    }

    cout<<"InfixTraversal:"<<endl;
    infixTraversal(root);
     cout<<"PrifixTraversal:"<<endl;
    prifixTraversal(root);
     cout<<"PostfixTraversal:"<<endl;
    postfixTraversal(root);

}
