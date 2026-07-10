#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n, int &comparisons, int &exchanges) {
    comparisons = 0;
    exchanges = 0;

    for (int i=0;i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                exchanges++;
            }
        }
    }
}

void print(int arr[], int n) {
    for (int i=0;i<n;i++) {
         cout<<arr[i]<< " ";
    }
     cout << endl;
}

int main() {
    int a;
    cout<<"Enter the number of element of the array: ";
    cin>>a;

    int arr[a];
    cout<<"Enter the elements of the array: ";
    for (int i=0; i<a; i++){
        cin>>arr[i];
    }


   cout<<"Elements of the array : "<<endl;
     for (int i=0; i<a; i++){
        cout<<arr[i]<<"  ";
    }

    int n = a;

    int comparisons, exchanges;

     cout << "Input: ";
    print(arr, n);

    bubbleSort(arr, n, comparisons, exchanges);

    cout << "Output: ";
    print(arr, n);

     cout << "Number of comparisons: " << comparisons <<  endl;
     cout << "Number of exchanges: " << exchanges <<  endl;

    return 0;
}

