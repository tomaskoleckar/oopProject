#include "Person.h"

Person::Person(string name)
{
    this->name = name;
}

int Person::getId()
{
    return this->id;
}

string Person::getType()
{
    return string();
}

void Person::setId(int id)
{
    this->id = id;
}

Person::~Person()
{

}


