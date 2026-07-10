# include <iostream>
using namespace std;
int main(){

int arr1[2][2],arr2[2][2],arr3[2][2],arr4[2][2],sum[2][2];

cout<<"Enter the elements of 1st matrix :"<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>arr1[i][j];
    }
}

cout<<"Enter the elements of 2nd matrix :"<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>arr2[i][j];
    }
}

cout<<"Enter the elements of 3rd matrix :"<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>arr3[i][j];
    }
}


cout<<"Enter the elements of 4th matrix :"<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>arr4[i][j];
    }
}


cout<<"Sum of 4 matrix:"<<endl;

 for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j]+arr3[i][j]+arr4[i][j];
        cout<<sum[i][j]<<"\t";
    }
    cout<<endl;
}


return 0;
}
