#include<iostream>
#include<cstring>
using namespace std;
int main(){
char s1[50]="Halloween";
char s2[50]="Happy New Year";//14
cout<<"Length of s2:"<<strlen(s2)<<endl;//14
cout<<"Length of s1:"<<strlen(s1)<<endl;//9
cout<<"Compare of s1 & s2:"<<strncmp(s1,s2,2)<<endl;//0
cout<<"concatenated result:"<<strncat(s2,s1,5)<<endl;
cout<<"Length of s2:"<<strlen(s2)<<endl;
cout<<"s1:"<<s1<<endl;
cout<<"copy: "<<strcpy(s1,s2)<<endl;
cout<<"search in s1:"<<strchr(s1,'o')<<endl;
cout<<"search in s1:"<<strstr(s1,"ll")<<endl;
cout<<"Merged form:"<<strcat(s1,s2)<<endl;
cout<<"s2:"<<s2<<endl;

}
