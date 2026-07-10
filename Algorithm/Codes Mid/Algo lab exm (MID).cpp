#include<iostream>
#include<climits>
using namespace std;
int count_rank= 0;

void printArray(float A[],int size){

for(int i=0; i<size; i++){
    cout<<A[i]<<"   ";
 }
}
void merge(float A[], int start, int mid, int endd){

count_rank++;
int n1= mid-start+1;
int n2= endd-mid;

float * L= new float[n1+1];
float* R= new float [n2+1];

for(int i=0; i<n1; i++){
    L[i] = A[start + i];
}
for(int j=0; j<n2; j++){
    R[j]=A[mid+1+j];
}
L[n1]=INT_MAX;
R[n2]=INT_MAX;
cout<<"Rank count: "<< count_rank<<endl;
 cout << "  Start rank: " << start << ", End rank: " << endd << ", Mid rank: " << mid << endl;

 int i=0;
 int j=0;
 for(int k=start; k<=endd; k++){
    if (L[i] <= R[j]) {
        A[k] = L[i];
        i++;
    }
    else{
         A[k] = R[j];
            j++;
    }
 }

cout<<"Count Soldier Rank: "<< count_rank<<endl;
    printArray(A, endd + 1);
    delete[] L;
    delete[] R;
}

void mergeSort(float A[], int start, int endd){
   if(start<endd){
    int mid=start+(endd-start)/2;
    mergeSort(A,start, mid);
    mergeSort(A, mid+1, endd);
    merge(A,start, mid, endd);

   }
}



int main (){
float A[]={5.9,5.7,5.5,5.2,5.8,5.6};
int n= sizeof(A)/sizeof(A[0]);
cout<<"Soldier initial rank: ";
printArray(A, n);
mergeSort(A,0,n-1);
cout<<"Soldier heights rank: ";
printArray(A,n);

cout<<"Total Rank count: "<<count_rank<<endl;


}
