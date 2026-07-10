#include<iostream>
#include<cstring>
using namespace std;
int main(){

    string  s1, s2;
    cout<<"Enter a string; ";
    cin >> s1;

    for (int i = s1.size() - 1; i >= 0; i--){

        s2 += s1[i];
    }

    cout << "The reversed form of the string : " << s2 << endl;

  //cout<<"Compare Result: "<<strcmp(s1,s2)<<endl;
}
