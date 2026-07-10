#include <iostream>
using namespace std;
void selectionSort(int arr[], int n, int order) {
    int startindex, currindex, mainindex;
    for (startindex=0; startindex<n-1; startindex++) {
        mainindex=startindex;
        for (currindex=startindex+1; currindex<n; currindex++) {
            if ((order==1 && arr[currindex]<arr[mainindex]) || (order==-1 && arr[currindex]>arr[mainindex])){
                mainindex = currindex;
            }
        }
        if(mainindex!=startindex){
            swap(arr[mainindex], arr[startindex]);
        }
    }
}

int main() {
    int arr[]={23,70,40,42,65,99,101,20,19,84,79};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << "Initial Array: ";
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr, n, 1);
    cout << "Ascending Order: ";
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout << endl;
    int arrDescending[] = {23, 70, 40, 42, 65, 99, 101, 20, 19, 84, 79};
    selectionSort(arrDescending, n, -1);
    cout << "Descending Order: ";
    for (int i=0; i<n; i++) {
        cout<<arrDescending[i]<<" ";
    }
}
