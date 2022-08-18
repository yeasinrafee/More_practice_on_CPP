#include<iostream>
using namespace std;

class student{
public:
    const int admissionFee;
    const int examFee;
    int id;

    student(int a, int b, int c)
    :admissionFee(a), examFee(b)
    {
        cout<<admissionFee<<endl;
        cout<<examFee<<endl;
        id = c;
        cout<<"Id = "<<id<<endl;
    }
};

int main(){

    student rafee(35000, 500, 21203083);

return 0;
}
