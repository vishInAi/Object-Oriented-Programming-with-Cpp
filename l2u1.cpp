// constructors in cpp
#include<iostream>
using namespace std;
class sum{
    private:
    int x,y;
    public:
    sum(){
        x=100;
        y=200;
        cout<<"value of x: ";
        cin>>x;
        cout<<"value of y: ";
        cout<<"sum of x and y"<<x+y;
    }
};
int main(int argc, char const *argv[])
{
    sum s;
    return 0;
}
