#include <iostream>
using namespace std;
#define MAX 10
class employee
{
    private:
       int id;
       char name[30];
       float salary;
    public:
        void getDetails(void);
        void putDetails(void);
        float paySocialInsurance();
};
void employee::getDetails(void)
{
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter salary: ";
    cin >> salary;
}
float employee::paySocialInsurance()
{
    
   float socialInsurance = 0;
    if(salary < 5000000)
        socialInsurance = (salary*1.3)/100;
    else
        socialInsurance = (salary*1.5)/100;   
    return socialInsurance;
}
void employee::putDetails(void)
{
    cout << fixed;
    cout.precision(0);
    cout << "ID: " << id << "\nName: " << name << "\nSalary: " << salary << "\nSocial insurance premium: " << paySocialInsurance() << endl;
}
int main()
{
    employee employee[MAX];
    int n, loop;
    cout << "Enter total number of employee: ";
    cin >> n;
    for(loop=0; loop<n; loop++)
    {
        cout << "Enter details of employee " << loop+1 << ":\n";
        employee[loop].getDetails();
    }
    for(loop=0; loop<n; loop++)
    {
        cout << "Details of employee " << loop+1 << ":\n";
        employee[loop].putDetails();
    }
    return 0;
}