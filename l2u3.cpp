#include<iostream>
using namespace std;
// this program is for learning Nested Member Functions simplest example possible
// you can use nested member functions in game dev as well for like damage count and other stuff using nested memb function
class mathematics{
    // using private keyword is upto you like even if you dont type it into program 
    // code without the public visibility scope is a private only
    private:
    double num;
    public:
    double inputNumber(){
        cout<<"Enter a Number to do the operations on : ";
        // input
        cin>>num;
    }
    double square(){
        // making the calculation return to the function so that we can nest in other fuction
        return num*num;
    }
    double displaySqCb(){
        // Nested Member Function
        double sq = square();
        // output
        cout<<"The Square of inputted number "<<num<<" is: "<<sq;
    }
};
int main(){
    mathematics maths;
    maths.inputNumber();
    maths.square();
    maths.displaySqCb();
}

