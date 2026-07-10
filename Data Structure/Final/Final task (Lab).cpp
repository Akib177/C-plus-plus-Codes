#include<iostream>
using namespace std;

class Node {
public:
    string name;
    double price;
    Node* left;
    Node* right;

    Node(string name,double price ): name(name), left(nullptr), right(nullptr) {}
};

class BinarySearchTree{
   private:
       Node* root;

    Node* insert(Node* node, string name, double price ) {
        if (node==nullptr) {
            return new Node(name,price );
        }
            if (name<node->name) {
            node->left=insert(node->left, name,price);
        }
         else if (name>node->name) {
            node->right=insert(node->right, name,price );
        }
        return node;
    }
    Node* search(Node* node, string name) {
        if (node==nullptr || node->name==name) {
            return node;
        }
        if (name<node->name) {
            return search(node->left, name);
        }
         else {
            return search(node->right, name);
        }
    }
      void infixTraversal(Node* node) {
        if (node != nullptr) {
            infixTraversal(node->left);
            cout << node->name << " "<<node->price<<" ";
            infixTraversal(node->right);
        }
    }
    Node* findMin(Node* node) {
          while (node->left != nullptr) {
                node=node->left;
          }
           return node;
    }
    Node* deleteNode(Node* node, string name) {
        if (node == nullptr) {
            return node;
        }
   if (name < node->name) {
            node->left = deleteNode(node->left, name);
        }
         else if (name > node->name) {
            node->right = deleteNode(node->right, name);
        }
         else {
            if (node->left== nullptr) {
            Node* temp=node->right;
            delete node;
            return temp;
            }
            else if (node->right== nullptr){
                Node* temp=node->left;
                delete node;
                return temp;
            }
              Node* temp = findMin(node->right);
               node->name = temp->name;
               node->right = deleteNode(node->right, temp->name);
         }
         return node;
     }
public:
    BinarySearchTree() : root(nullptr) {}

    void insert(string name, double price) {
          root = insert(root, name, price);
      }

    bool search(string name) {
            return search(root, name) != nullptr;
       }
    void infixTraversal() {
        infixTraversal(root);
    }

    void deleteNode(string name) {
        root = deleteNode(root, name);
    }
};

int main(){
BinarySearchTree bst;

bst.insert("Soap",20);
bst.insert("Shampoo",50);
bst.insert("Biscuits",70);
bst.insert("Pen",10);
cout<<"Products inserted!!"<<endl;
cout<<"Searching product:"<<endl;
string name ="Soap";
    if (bst.search(name)) {
        cout<< name << " found in the list." << endl;
    }
     else {
        cout<< name << " not found in the list." << endl;
    }

  cout << "Product List: ";
    bst.infixTraversal();
    cout << endl;

cout<<"Delete priduct:"<<endl;
bst.deleteNode("Pen");
string name2 ="Pen";
    if (bst.search(name2)) {
        cout<< name2 << " found in the list." << endl;
    }
     else {
        cout<< name2 << " not found in the list." << endl;
    }
}

