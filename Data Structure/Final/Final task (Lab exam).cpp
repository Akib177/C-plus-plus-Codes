# include<bits/stdc++.h>

using namespace std;

class Node {
public:
    string name;
    double prize;
    Node* left;
    Node* right;

    Node(string productName,double productPrize){
    name=productName;
    prize=productPrize;

    left=right=nullptr;
    }
};

class BinarySearchTree {
private:
    Node* root;

    Node* insert(Node* node,string name ,double prize) {
        if (node == nullptr) {
            return new Node(name,prize);
        }
        if (name < node->name) {
            node->left = insert(node->left, name,prize);
        }
         else if (name > node->name) {
            node->right = insert(node->right, name,prize);
        }
        return node;
    }

    Node* search(Node* node,string name) {
        if (node == nullptr || node->name == name) {
            return node;
        }
        if (name < node->name) {
            return search(node->left, name);
        }
         else {
            return search(node->right,name);
        }
    }

    Node* findMin(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* deleteNode(Node* node,string name  ) {
        if (node == nullptr) {
            return node;
        }
        if (name < node->name) {
            node->left = deleteNode(node->left, name);
        }
        else if (name> node->name) {
            node->right = deleteNode(node->right, name);
        }
         else {
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            Node* temp = findMin(node->right);
            node->name = temp->name;
            node->right = deleteNode(node->right, temp->name);
        }
        return node;
    }

    void infixTraversal(Node* node) {
        if (node != nullptr) {
            infixTraversal(node->left);
            cout << node->name<<" "<<node->prize<< " ";
            infixTraversal(node->right);
        }
    }





public:
    BinarySearchTree() : root(nullptr) {}

    void insert(string name ,double prize) {
        root = insert(root, name,prize);
    }

    bool search(string name) {
        return search(root, name) != nullptr;
    }

    void deleteNode(string name ) {
        root = deleteNode(root, name);
    }

    void infixTraversal() {
        infixTraversal(root);
    }


};

int main() {
    BinarySearchTree bst;

    bst.insert("realme",20000);
    bst.insert("xiomi",15000);
    bst.insert("samsung",30000);
    bst.insert("oppo",17000);
    bst.insert("1+",16000);

    cout << "List of the products: ";
    bst.infixTraversal();
    cout << endl;


    string searchValue = "realme";
    if (bst.search(searchValue)) {
        cout << "product Found: " << searchValue << endl;
    }
     else {
        cout << "product not Found: " << searchValue  << endl;
    }

    string searchValue1 = "gfhjjk";
    if (bst.search(searchValue1)) {
        cout << "product Found: " << searchValue1 << endl;
    }
     else {
        cout << "product not Found: " << searchValue1  << endl;
    }

    string deleteValue = "oppo";
    bst.deleteNode(deleteValue);

    cout << "List order after deletion of " << deleteValue << " : ";
    bst.infixTraversal();
    }
