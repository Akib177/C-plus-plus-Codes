
 #include<iostream>
 using namespace std;
 int main(){
    float arr1[4][4], arr2[4][4],sum[4][4];
    cout<<"Enter the elements of the first matrix: ";
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"1st matrix is:"<<endl;
     for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the elements of the second matrix: ";
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"2nd matrix is:"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Addition of two matrices:"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}
