//code by Najib(2202108)
//static and consant variables in c++
#include<iostream>

using namespace std;
int main()
{
    const int a = 15;
    // here a is constant and value of a is unchangable
    cout << a << endl;
    cout << endl;

    for(int i=1;i<a;i++)
    {
        static int c = 0; //this keyword is keep static code in first loop
        cout << c << endl;
        c++;
    }

    return 0;
}