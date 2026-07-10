#include <iostream>
using namespace std;
int A;

void binarySearch(int arr[], int n, int N){
int L;
int R=n-1;
int m= (0+ (n-1))/2;
for (int i=0; i<n; i++){

        if (N==arr[m]){
        A=m;
        break;
        }

        if (N>arr[i]){
        L= m+1;
        A=L;
        }
        else if(N<arr[i]) {
        R= m-1;
        A=R;
        }

// cout<<"Found at index "<<i<<endl;
    }

cout<<"Found at index "<<A<<endl;
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
    int N;
     cout<<"Enter the number for search: ";
     cin >>N;

    binarySearch(arr, n,N);


}
