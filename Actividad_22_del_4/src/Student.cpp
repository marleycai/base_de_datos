#include "../include/Student.hpp"

Student::Student()
{
}

void Student::setIdentifier(int identifier)
{
    _identifier = identifier;
}

int Student::getIdentifier()
{
    return _identifier;
}

void Student::setName(string name)
{
    _name = name;
}

string Student::getName()
{
    return _name;
}

void Student::setSurname(string surname)
{
    _surname = surname;
}

string Student::getSurname()
{
    return _surname;
}


