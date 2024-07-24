// Private Member functions and Arrays within Class
#include<iostream>
using namespace std;
class arrayTest{
    int n;
    int* numbers;
    public:
    arrayTest(int count): n(count){
        numbers = new int[n];
    }
    ~arrayTest() {
        delete[] numbers; // Clean up memory when the object is destroyed
    }
    void inputNumbers();
    void outputNumbers();
};
void arrayTest::inputNumbers(){
    cout<<"Enter "<<n<<" numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin>>numbers[i];
    }
}
void arrayTest::outputNumbers(){
    for (int i = 0; i < n; i++)
    {
        cout<<"the numbers that were entered: "<<numbers[i]<<"\n";
    }
}
int main(){
    cout<<"Enter how many numbers you wanna input: ";
    int count;
    cin>>count;
    arrayTest at(count);
    at.inputNumbers();
    at.outputNumbers();
}
