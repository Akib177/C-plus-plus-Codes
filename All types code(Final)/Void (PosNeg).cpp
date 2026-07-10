#include<iostream>
using namespace std;
void posneg(int arr[5]){
    for(int i=0; i<5; i++){
        if(arr[i] >= 0){
            cout << arr[i] << " is positive" << endl;
        }
        else {
            cout << arr[i] << "  is  Negative" << endl;
        }
    }
}

int main () {

    int arr [5];
    cout << "Enter the element:";
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    posneg(arr);

}
