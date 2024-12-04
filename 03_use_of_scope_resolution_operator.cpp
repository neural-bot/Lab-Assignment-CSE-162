//code by Najib(2202108)
#include<iostream>

int var = 5;

using namespace std;
int main()
{
    int var = 10;
    cout << "Global Variable: " << ::var << endl;//using scope resolution operator for calling global variable
    cout << "local Variable: " << var << endl;
    
    return 0;
}