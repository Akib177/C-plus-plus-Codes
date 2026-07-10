#include<iostream>
using namespace std;

class MyStack{
int stack[5],element, top, maxSize;
public:

MyStack(int size= 10 ){maxSize =size; top =0;}

bool isEmpty (){
return (top ==0);
}
bool isFull(){
return (top==maxSize);
}

bool push(int element ){

	if(isFull()) {
            cout << "Stack is Full"<<endl;
	 return false;
	  }

 	stack[top++]= element;
	return true;
}

bool pop(){

	if(isEmpty()) {
	     cout<< "Stack empty"<<endl;
    return false;
     }
	top--;
	return true;
}
int display(){
    if(isEmpty()) {
	     cout<< "Stack empty"<<endl;
    return false;
     }
     else {
  for (int i=top-1; i>=0; i--){
 cout<<stack[i]<<endl;
  }
}
}
};

int main(){

int element;

MyStack mystack;
cout<<"Push"<<endl;

mystack.push(10);
mystack.push(20);
mystack.push(30);
mystack.push(40);

mystack.display();

cout<<"POP"<<endl;
mystack.pop();
mystack.pop();
mystack.pop();
mystack.pop();
mystack.display();
}










