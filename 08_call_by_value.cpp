//code by Najib(2202108)
//call by value for user defined funcrions
#include<iostream>
using namespace std;

int add(int a, int b) // user defined function
{
    int sum = a+b;
    return sum;
}
int main()
{
    int x,y; //declaring variables
    cout << "Enter 2 Positive Number: ";
    cin >> x >> y;
    cout << endl;

    int result = add(x,y); //call by value
    cout << "Summation is: " << result << endl;
    
    return 0;
}