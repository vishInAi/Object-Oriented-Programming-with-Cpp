#include<iostream>
using namespace std;
class Rectangle{
    
    // use of private keyword
    private:
    double length;
    double width;

    // use of public keyword
    public:

    // Member function setting dimensions inside the class syntax is normal.
    void set_dimensions(double l,double w)
    {
        length=l;
        width=w;
    }

    // function to calculate perimeter init.
    double perimeter();
};

// function declared outside the class using syntax "returnType className :: functionName (parameter){}"
double Rectangle :: perimeter(){
    return 2 * (length + width);
}
int main ()
{
    // creating instance for class rectangle
    Rectangle rectangle1;

    // setting inputs
    double userLength,userWidth;
    cout << "Enter length: ";
    cin >> userLength;
    cout << "Enter Width: ";
    cin >> userWidth;

    // Setting dimensions used the class instance and set the dimensions too
    // the function set inside class to use it you have to use the instance.
    rectangle1.set_dimensions(userLength,userWidth);

    // calculate and print the perimeter
    cout << "Perimeter: "<<rectangle1.perimeter();
    return 0;
}