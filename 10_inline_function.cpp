//code by Najib(2202108)
//inline function
#include <iostream>
using namespace std;

inline void displayNum(int num) //inline function declaration
{
    cout << num << endl;
}

int main() 
{
    displayNum(5); // first function call

    displayNum(8); // second function call

    return 0;
}