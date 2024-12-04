//code by Najib(2202108)
#include<iostream>

using namespace std;
int main()
{
    int x = 10; //declaring a variable
    int *ptr = &x; //declaring pointer
    cout << "Value of x: " << x << endl;
    cout << "Value of address of x: " << ptr << endl;
    cout << endl;

    int *arr = new int[3]; //initialize a new 3 size dynamic array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    
    //output of the array
    cout << "Value of array 1: " << arr[0] << endl;
    cout << "Value of array 2: " << arr[1] << endl;
    cout << "Value of array 3: " << arr[2] << endl;
    cout << endl;

    //delete the previous array of using delete operator
    delete[] arr;
    cout << "Value of array 1: " << arr[0] << endl;
    cout << "Value of array 2: " << arr[1] << endl;
    cout << "Value of array 3: " << arr[2] << endl;
    cout << endl;

    return 0;
}