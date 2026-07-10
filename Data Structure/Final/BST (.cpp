#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    Node* root;

    Node* insert(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insert(node->left, value);
        } else if (value > node->data) {
            node->right = insert(node->right, value);
        }
        return node;
    }

    Node* search(Node* node, int value) {
        if (node == nullptr || node->data == value) {
            return node;
        }
        if (value < node->data) {
            return search(node->left, value);
        } else {
            return search(node->right, value);
        }
    }

    Node* findMin(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* deleteNode(Node* node, int value) {
        if (node == nullptr) {
            return node;
        }
        if (value < node->data) {
            node->left = deleteNode(node->left, value);
        } else if (value > node->data) {
            node->right = deleteNode(node->right, value);
        } else {
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            Node* temp = findMin(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right, temp->data);
        }
        return node;
    }

    void infixTraversal(Node* node) {
        if (node != nullptr) {
            infixTraversal(node->left);
            cout << node->data << " ";
            infixTraversal(node->right);
        }
    }

    void prefixTraversal(Node* node) {
        if (node != nullptr) {
            cout << node->data << " ";
            prefixTraversal(node->left);
            prefixTraversal(node->right);
        }
    }

    void postfixTraversal(Node* node) {
        if (node != nullptr) {
            postfixTraversal(node->left);
            postfixTraversal(node->right);
            cout << node->data << " ";
        }
    }

public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int value) {
        root = insert(root, value);
    }

    bool search(int value) {
        return search(root, value) != nullptr;
    }

    void deleteNode(int value) {
        root = deleteNode(root, value);
    }

    void infixTraversal() {
        infixTraversal(root);
    }

    void prefixTraversal() {
        prefixTraversal(root);
    }

    void postfixTraversal() {
        postfixTraversal(root);
    }
};

int main() {
    BinarySearchTree bst;

    bst.insert(20);
    bst.insert(5);
    bst.insert(25);
    bst.insert(16);
    bst.insert(10);

    cout << "Infix (in-order) traversal: ";
    bst.infixTraversal();
    cout << endl;

    cout << "Prefix (pre-order) traversal: ";
    bst.prefixTraversal();
    cout << endl;

    cout << "Postfix (post-order) traversal: ";
    bst.postfixTraversal();
    cout << endl;

    int searchValue = 60;
    if (bst.search(searchValue)) {
        cout << "Value " << searchValue << " found in the BST." << endl;
    } else {
        cout << "Value " << searchValue << " not found in the BST." << endl;
    }

    int searchValue1 = 20;
    if (bst.search(searchValue1)) {
        cout << "Value " << searchValue1 << " found in the BST." << endl;
    } else {
        cout << "Value " << searchValue1 << " not found in the BST." << endl;
    }

    int deleteValue = 20;
    bst.deleteNode(deleteValue);

    cout << "Infix (in-order) traversal after deletion of " << deleteValue << " : ";
    bst.infixTraversal();
    cout << endl;

    return 0;
}

