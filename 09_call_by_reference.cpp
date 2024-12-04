//code by Najib(2202108)
//call by reference for user defined funcrions
#include<iostream>
using namespace std;

void swap(int *a, int *b) //user defined function
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x,y; //declaring variables
    cout << "Enter 2 Positive Number: ";
    cin >> x >> y;
    cout << endl;
    cout << "The value of x: " << x << " and the value of y: " << y << endl;
    cout << endl;

    swap(&x,&y); //call by reference pointers
    cout << "The value of x: " << x << " and the value of y: " << y << endl;

    
    return 0;
}