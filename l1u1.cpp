//Using basic object oriented programming classes and objects
#include<iostream>
using namespace std;
class basic_class{
    public:
    int first_num,second_num;
    int sum(int a,int b){
        cout<<"Sum of a and b is "<<a+b;
    }
};
int main(){
    basic_class b1;
    cout<<"enter first number : ";
    cin>>b1.first_num;
    cout<<"enter first number : ";
    cin>>b1.second_num;
    cout<<"value of first number is "<<b1.first_num+b1.second_num;
    return 0;
}