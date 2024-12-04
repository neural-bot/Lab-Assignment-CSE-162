//code by Najib(2202108)
#include<iostream>
using namespace std;

class text //class
{
    private:
    int x = 10;//private variable
    
    public:
    void display()//user defined function
    {
        cout << "Enterd value is: " << x << endl;
    }
};

int main()
{
    text m;//object of class text
    m.display();

    return 0;
}