#include<iostream>
#include<stdio.h>
using namespace std;
class Person
{
public:
    Person(){}
    Person(const Person &t)
    {
        cout<<"copy constructor called"<< endl;
    }
     Person& operator = (const Person &t) 
    { 
        cout<<"Assignment operator called "<<endl; 
        return *this; 
    }  
};
int main()  
{  
    Person t1, t2;  
    t2 = t1;  
    Person t3 = t1;  
    getchar();  
    return 0;  
} 