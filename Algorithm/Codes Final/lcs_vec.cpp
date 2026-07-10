#include <iostream>
#include <vector>
#include<string.h>
using namespace std;

void print_lcsTable(vector<vector<int> > arr)
{
    for(int i=1;i<arr.size(); i++)
    {
        for (int j=1; j<arr[i].size(); j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

}

void print_direction(vector<vector<char> > srtArr)
{
    for(int i=1;i<srtArr.size(); i++)
    {
        for (int j=1; j<srtArr[i].size(); j++)
        {
            cout<<srtArr[i][j]<<"\t";
        }
        cout<<endl;
    }

}

void print_LCS(vector<vector<char> > dirArr,char *str1, int i, int j)
{
    if(i==0 || j==0)
    {
        cout<<str1[i]<<" ";
        return;
    }

    if(dirArr[i][j]=='D')
    {
        print_LCS(dirArr, str1,i-1,j-1);
        cout<<str1[i]<<" ";
    }
    else if(dirArr[i][j]=='U')
        print_LCS(dirArr, str1,i-1,j);
    else
        print_LCS(dirArr, str1,i,j-1);
}

void find_Lcs(char *str1, char *str2)
{
  int m = strlen(str1);
  int n = strlen(str2);
  vector<vector<int> > lcsTable(m+1,vector<int>(n+1, 0));
  vector<vector<char> > dirTable(m+1,vector<char>(n+1, '0'));

  cout<<"print lcs Table: "<<endl;
  print_lcsTable(lcsTable);

  cout<<"print direction Table: "<<endl;
  print_direction(dirTable);

  for(int i =1; i<=m ;i++)
  {
      for(int j=1; j<=n; j++)
      {
          if(str1[i]==str2[j])
          {
              lcsTable[i][j]=lcsTable[i-1][j-1]+1;
              dirTable[i][j]='D';
          }
          else if(lcsTable[i-1][j]>=lcsTable[i][j-1])
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

  cout<<"print lcs Table: "<<endl;
  print_lcsTable(lcsTable);

  cout<<"print direction Table: "<<endl;
  print_direction(dirTable);

  cout<<"matched string: ";
  print_LCS(dirTable,str1,m,n);
}

int main() {
  char S2[] = "ABTCBAGTAXTB";
  char S1[] = "ATCBGTTXCB";
  //int m = strlen(S1);
  //int n = strlen(S2);

  find_Lcs(S1, S2);
}
