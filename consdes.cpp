#include<iostream>
using namespace std;
class Student
{
    private:
           int rollNo;
           string name;
    public:
           Student(int r,string n ){
                       rollNo = r;
                       name = n;
                       cout<<"student object created" << endl;
           }
           void display()
           {
            cout<<"Roll Number : "<<rollNo <<endl;
            cout<<"Name : "<<name<<endl;
           }
           ~Student()
           {
            cout<<"Student object destructor "<<endl;
           } 
};
int main()
{
    Student s(101,"Arun");
    s.display();
    return 0;
}