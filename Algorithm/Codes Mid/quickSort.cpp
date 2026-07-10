#include<iostream>
#include<cmath>

using namespace std;

int partition_( int *a, int low, int high )
{
    int left, right, pivot_item;
    pivot_item = a[low];
    left = low;
    right = high;
    while ( left < right )
        {
            while( a[left] >= pivot_item )
                left++;
            while( a[right] < pivot_item )
                right--;
            if ( left < right )
                swap(a[left],a[right]);
        }
    a[low] = a[right];
    a[right] = pivot_item;
    return right;
}

void quicksort( int a[], int low, int high )
{
    int pivot;
    if ( high > low )
    {
        pivot = partition_( a, low, high );
        quicksort( a, low, pivot-1 );
        quicksort( a, pivot+1, high );
    }
}

void printA(int A[], int len){
    for(int i=0; i<len; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[7]={2,1,6,4,7,-5,3};
    //int arr[10]={4,5,2,6,3,8,4,12,-4, 1};
    int len =sizeof(a)/sizeof(a[0]);
    printA(a, len);
    quicksort(a,0,len-1);
    cout<<"SORTED ARRAY:  ";
    printA(a, len);
    return 0;
}

