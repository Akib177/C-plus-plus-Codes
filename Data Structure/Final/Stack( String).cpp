#include<iostream>
#include<cstring>
using namespace std;

class MyStack{
char  A[25];
int  top, maxSize;

public:

MyStack(int size= 25 ){maxSize =size; top =0;}

bool isEmpty (){
return (top ==0);
}
bool isFull(){
return (top==maxSize);
}

bool push(char element ){

	if(isFull()) {
            cout << "Stack is Full"<<endl;
	 return false;
	  }

 	A[top++]= element;
	return true;
}

bool pop(){

	if(isEmpty()) {
	     cout<< "Stack empty"<<endl;
    return false;
     }
    top--;
    cout<<A[top];
	return true;


}
int display(){
    if(isEmpty()) {
	     cout<< "Stack empty"<<endl;
    return false;
     }
     else {
  for (int i=top-1; i>=0; i--){
 cout<<A[i]<<endl;
  }
}
}
};

int main (){

    MyStack mystack;
    cout <<"Push"<<endl;
    string element ="Hello Class!";

    for(int i=0; i<element.length();i++){
        char ch = element[i];
        mystack.push(ch);
    }
mystack.display();

cout<<endl;

cout <<"Pop"<<endl;
cout<<endl;
for(int i=0; i<element.length();i++){

        mystack.pop();
        cout<<endl;
      //  mystack.display();
    }
mystack.display();

}

Node* deleteNode(Node* root, int value) {
    if (root == nullptr) {
        return root;
    }
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}


