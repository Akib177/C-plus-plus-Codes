#include <iostream>
#include <vector>
using namespace std;
int c=0;
void print_array(vector<vector<int> > arr)
{
    for(int i=1;i<arr.size()-1; i++)
    {
        for (int j=1; j<arr[i].size()-1; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

}
void print_optimal_parens(vector<vector<int> > sp, int i, int j)
{
    c++;
    cout<<"c: "<<c<<"\t i: "<<i<<"\t j: "<<j<<endl;
    if(i==j)
        cout<<"A"<<i<<" ";
    else
    {
        cout<< "(";
        print_optimal_parens(sp,i,sp[i][j]);
        print_optimal_parens(sp,sp[i][j]+1,j);
        cout<<")";
    }
}
void Matrix_chain_Multiplication(int dim[], int n)
{
   cout<<"\n n: :"<<n<<endl;
   //cout<<"enter Matrixchain: " <<endl;
   vector<vector<int> > multiply(n+1,vector<int>(n+1, 0));
   vector<vector<int> > split(n+1,vector<int>(n+1, 0));

    for(int l=2; l<=n; l++)  //chain length
   {
       //cout<<"----------------start l-loop:" <<l <<endl;
       for(int i=1; i<=n-l+1; i++) // only upper half will calculate
       {
           //cout<<"start i-loop: " <<i <<endl;
          int j= i+l-1;
          multiply[i][j]= INT_MAX;
          for(int k=i; k<=j-1; k++)
          {
              //cout<<"start k-loop: " <<k <<endl;
              int tempCal= multiply[i][k]+multiply[k+1][j]+ (dim[i-1]*dim[k]*dim[j]);
              //cout<<"temcal: "<<tempCal<<endl;
              if (tempCal<multiply[i][j])
              {

                  multiply[i][j]=tempCal;
                  //cout<<"if: checked   "<<multiply[i][j]<<endl;
                  split[i][j]=k;
              }
          }
       }
   }


    cout<<"print Multiply: "<<endl;
    print_array(multiply);

    cout<<"print split: "<<endl;
    print_array(split);

    cout<<"print optimal soution"<<endl;
    print_optimal_parens(split,1,n-1);
}


int main()
{

    int dimenson[] = { 5,4,6,2 };
    int len = sizeof(dimenson) / sizeof(dimenson[0]);
    cout<<"mainsize: "<< len <<endl;
    Matrix_chain_Multiplication(dimenson,len);
    return 0;
}
