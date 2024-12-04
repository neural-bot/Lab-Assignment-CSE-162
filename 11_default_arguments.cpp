//code by Najib(2202108)
//inline function
#include <iostream>
using namespace std;

void sum(int x, int y, int z) // declaing user defined function
{
    cout << "Total Sum is: " << x+y+z;
}

int main() 
{
    int a,b;
    //case 1
    cout << "Enter values: ";
    cin >> a >> b;

    sum(a,b,5); //5 is default argumnet
    cout << endl << endl;

    //case 2
    int c;
    cout << "Enter the 3rd one: ";
    cin >> c;
    sum(a,b,c);

    return 0;
}