#include <iostream>
#include<string.h>
using namespace std;
int main() {
  char X[] = "GXTXATB";
  char Y[] = "AGGTAB";

  int m = strlen(X);
  int n = strlen(Y);

  int lcsTable[m+1][n+1]; // created row for lcs
  char dirTable[m+1][n+1];

  for(int i=0 ;i<=m;i++)
  {
      lcsTable[i][0]=0;
  }

  for(int j=0 ; j<=n; j++)
  {
      lcsTable[0][j]=0;
  }

  for(int i =1; i<=m; i++)
  {
      for(int j =1; j<=n; j++)
      {
          if(X[i-1]==Y[j-1])
          {
              lcsTable[i][j]= lcsTable[i-1][j-1]+1;
              dirTable[i][j]='D';
          }
          else if(lcsTable[i-1][j]>= lcsTable[i][j-1])
          {
              lcsTable[i][j]=lcsTable[i-1][j];
              dirTable[i][j]='U';
          }
          else
          {
              lcsTable[i][j]=lcsTable[i][j-1];
              dirTable[i][j]='L';
          }
      }
  }

  cout<<"LCS Table"<<endl;
  for(int i =0; i<=m; i++)
  {
      for(int j = 0; j<=n ; j++ )
      {
          cout<<lcsTable[i][j]<<"\t";
      }
      cout<<endl;
  }

  cout<<"\nDirection Table"<<endl;
  for(int i =1; i<=m; i++)
  {
      for(int j = 1; j<=n ; j++ )
      {
          cout<<dirTable[i][j]<<"\t";
      }
      cout<<endl;
  }

  cout<<"\nLCS Leght = " <<lcsTable[m][n]<<endl;

  //----- LCS string print
  cout<<"LCS: "<<endl;
  int i =m; int j =n;
  while(i!=0 || j!=0)
    {
        if(dirTable[i][j]=='D')
        {
            cout<<X[i-1];
            i--;
            j--;
        }
        else if(dirTable[i][j]=='U')
        {
            i--;
        }
        else if(dirTable[i][j]=='L')
        {
            j--;
        }
    }

}// end of main()
