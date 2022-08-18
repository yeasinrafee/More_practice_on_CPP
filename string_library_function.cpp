#include<iostream>
#include<cstring>
using namespace std;

int main(){

char name[] = "Yeasin";
char name2[] = " Rafee";
char name3[30];
int length = strlen(name);
cout<<"Length is : "<<length<<endl;

strcpy(name3, name);
cout<<name3<<endl;

strupr(strcat(name3, name2));
cout<<name3<<endl;

cout<<strcmp(name, name2)<<endl;
return 0;
}
