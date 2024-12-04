#include<iostream>
using namespace std;

class Employee{
    private:
        int salary = 10000;
        static int count; // static data member  
    
    public:
        void showSalary()
        {
            cout << "Salary is: " << salary << endl;
            salary = salary+10000;
            cout << "count is: " << count << endl;
            count++;
        }
};

int Employee :: count=1;

int main()
{
    Employee one, two;

    one.showSalary();
    two.showSalary();

    return 0;
}