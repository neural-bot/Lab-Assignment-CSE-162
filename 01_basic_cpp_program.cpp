//code by Najib(2202108)
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name; // declaring a string type variable for input
    cout << "HI, I'm C++. And you?" << endl;
    cout << "Your name: ";
    getline(cin, name);

    cout << "Hello, " << name << " .Let's do some fun coding with me !!!";

    return 0;
}