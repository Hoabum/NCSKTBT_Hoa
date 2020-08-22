#include <iostream>
using namespace std;
#define MAX 10
class employee
{
public:
    std::string id;
    std::string name;
    float salary;
    void getDetails(void);
    void putDetails(void);
    float paySocialInsurance();
    void setId(std::string id);
    std::string getId();
    std::string getName();
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
    if (salary < 5000000)
        socialInsurance = (salary * 1.3) / 100;
    else
        socialInsurance = (salary * 1.5) / 100;
    return socialInsurance;
}
std::string employee::getId()
{
    this->id;
}
std::string employee::getName()
{
    this->name;
}
void employee::putDetails(void)
{
    cout << fixed;
    employee employee1;
    cout.precision(0);
    cout << "\nSalary: " << salary << "\nSocial insurance premium: " << paySocialInsurance() << endl;
    std::cout<<employee1.getId();
    std::cout<<employee1.getName();
    
}
int main()
{
    employee employee[100];
    int n, loop;
    cout << "Enter total number of employee: ";
    cin >> n;
    for (loop = 0; loop < n; loop++)
    {
        cout << "Enter details of employee " << loop + 1 << ":\n";
        employee[loop].getDetails();
    }
    for (loop = 0; loop < n; loop++)
    {
        cout << "Details of employee " << loop + 1 << ":\n";
        employee[loop].putDetails();
    }
    return 0;
}