//code by Najib(2202108)
#include<iostream>
using namespace std;

class Operation{
public:
    void add(int a, int b) //function for adding variables
    {
        cout << a+b << endl;
    }

    void sub(int a, int b) //function for substituting variables
    {
        cout << a-b << endl;
    }

    void mul(int a, int b) //function for multiplying variables
    {
        cout << a*b << endl;
    }

    void div(int a, int b) //function for dividing variables
    {
        cout << (float)a/b << endl;
    }
};

int main()
{
    Operation calculator; //object declaration

    calculator.add(5,4); //first execution
    calculator.sub(5,4); //second execution
    calculator.mul(5,4); //third execution
    calculator.div(5,4); //fourth execution
}