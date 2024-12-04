//code by Najib(2202108)
//function overloading
#include <iostream>
using namespace std;

void sum(int x, int y) //function with two parameters
{
    cout << "Total Sum is: " << x+y;
}

void sum(int x, int y, int z) //function with three parameters
{ 
    cout << "Total Sum is: " << x+y+z;
}

int main() 
{
    sum(5,10); // calling two parametered function with same name

    cout << endl;

    sum(5,10,15); // calling three parametered function with same name


    return 0;
}