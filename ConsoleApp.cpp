#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    Person()
    {
        name = "";
    }
    Person(string name)
    {
        this->name = name;

    }
    static void validate_name(string name)
    {
        if (name.empty())
        {
            throw "Name can't be empty!";
        }
    }

};

int main()
{
    Person *pers = new Person;
    {
        Person* pers2 = pers;
    }
    //Person::validate_name(*pers.name);
    std::cout << "Hello World!\n";

}

