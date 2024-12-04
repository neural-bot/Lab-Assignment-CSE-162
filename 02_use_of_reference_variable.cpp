//code by Najib(2202108)
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int x=10;
    cout << x << endl;//before the reference

    int &r=x;//r variable refers the pointer to x; now x = r
    r=20;
    cout << &r << endl;
    cout << x << endl;


    return 0;
}