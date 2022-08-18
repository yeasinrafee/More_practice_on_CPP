#include<iostream>
using namespace std;

int main(){

    //char message[]={'h', 'e', 'l', 'l', 'o', '\0'};
    //char message[] = "hello";
    //cout<<message<<endl;

    char name[30];
    cout<<"Enter your name: "<<endl;
    gets(name);
    cout<<"Welcome Mr."<<name<<endl;

return 0;
}
