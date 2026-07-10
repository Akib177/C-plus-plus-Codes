#include <iostream>

using namespace std;

const int MAX_SIZE = 5;

class Queue{

private:

    string arr[MAX_SIZE];

    int f, r;

public:

    Queue(){

        f = 0;

        r = 0;

    }

    bool isEmpty(){

        return f == r;

    }

    bool isFull(){

        return r == MAX_SIZE;

    }

    void enqueue(string value){

        if (isFull()){

            cout << " Print Queue is full. Cannot add more jobs." << endl;

            return;

        }

        arr[r++] = value;

        cout << value<<"   "  << "to the print queue"<<endl;

    }

    void dequeue(){

        if (isEmpty()){

            cout << "Print Queue is empty.No jobs to print !" << endl;

            return;

        }

        cout << arr[f++]  << endl;

    }


    /*void display(){

        if (isEmpty()){

            cout << "Queue is empty." << endl;

        } else{

            cout << "Elements in the queue: ";

            for (int i = f; i < r; i++){

                cout << arr[i] << " ";

            }

            cout << endl;

        }

    }*/

};

int main(){

    Queue q;

    q.enqueue("Page 1:Final Tearm assignment");

    q.enqueue("Page 2:Name->Tamanna Billah");

    q.enqueue("Page 3:ID->23-53176-3");

    q.enqueue("Page 4:Smubmitted to->Saikot Baul");

    q.enqueue("Page 5:Date->22/9/2024");

    q.enqueue(" ");

    cout<<endl;


    cout<<endl;

    cout<<"processing the print queue...."<<endl;

    q.dequeue();

    q.dequeue();

    q.dequeue();

    q.dequeue();

    q.dequeue();

    q.dequeue();




    cout<<endl;


    return 0;

}
