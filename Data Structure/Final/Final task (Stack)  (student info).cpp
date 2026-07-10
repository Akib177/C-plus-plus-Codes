#include <iostream>
using namespace std;

const int size=5;
class Queue{
private:
    string queue [size];
    int f, r;
public:
    Queue(){
        f=r=0;
    }
    bool isEmpty(){
        return f==r;
    }
    bool isFull(){
        return r==size;
    }
    void enqueue(string value){
        if (isFull()){
            cout << " Print Queue is full. Cannot add more jobs." << endl;
            return;
        }
        queue [r++]=value;
        cout<<"Added printing job -> "<< value<<"   to the print queue"<<endl;
    }
    void dequeue(){
        if(isEmpty()){
            cout<< "Print Queue is empty. No jobs to print !" <<endl;
            return;
        }
        cout<<"Printing job -> "<<queue [f++]<<endl;
    }
};

int main(){
    Queue q;
    q.enqueue("[Page 1: Final Tearm assignment] ");
    q.enqueue("[Page 2: Name->Adnan Akib] ");
    q.enqueue("[Page 3: ID->23-53177-3] ");
    q.enqueue("[Page 4: Smubmitted to->Saikot Baul] ");
    q.enqueue("[Page 5: Date->22 September , 2024] ");

    q.enqueue("[Page 6: Uni -> AIUB] ");

    cout<<endl;
    cout<<endl;

    cout<<"processing the print queue...."<<endl;
     cout<<endl;

    for(int i=0; i<6; i++){
    q.dequeue();
    }

    return 0;

}
