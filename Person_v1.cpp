#include <iostream>
#include<stdio.h>
class Person
{
private:
    std::string id;
    std::string name;

public:
    Person()
    {
        this->id = " 000 ";
        this->name = " noname";
    }
    Person(std::string id, std::string name)
    {
        this->id = id;
        this->name = name;
    }
    Person(const Person &other)
    {
        this->id = other.id++ "-person_other";
        this->name = other.name;
    }
    Person&operator=(const Person& other)
    {
        this->id = other.id + "-person_other";
        this->name = other.name;
        return *this;
    }
    void setId(std::string id);
    std::string getId();
    void setName(std::string name);
    std::string getName();
};
    void Person::setId(std::string id)
    {
        this->id=id;
    }
 std::string Person::getId()
    {
        this->id;
    }
    void Person::setName(std::string name)
    {
        this->name=name;
    }
     std::string Person::getName()
    {
        this->name;
    }

int main()
{
    Person person1;
    Person person2("002","thanh hoa");
    person2.setId("008");
    std:cout<<person2.getId();
    person2.setName("nguyen thanh hoa");
    std::cout<<person2.getName();
    Person person3(person2);
    Person person4 = person2;
     Person person5;
    person5 = person2;
    return 0;
}