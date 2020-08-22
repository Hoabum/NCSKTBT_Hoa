#include<iostrean>
using namespace std;
class Complex
{
    int real, img;
public:
    Complex()
    {
        real =0; img = 0;
    }
    Complex(int r ,int i)
    {
        real = r ; img = 0;
    }
    void set();
    void get();
    void display();
    friend complex add(complex,complex);
    friend complex sub(complex,complex);
};
void complex::set(){
    cout << "enter real part ";
    cin>> real;
}
