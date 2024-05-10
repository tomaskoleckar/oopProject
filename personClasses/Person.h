#ifndef PERSON_H
#define PERSON_H

#include <iostream>

#pragma once

using namespace std;

class Person
{
public:
    Person(string name);
    int getId();
    virtual string getType() = 0;
    void setId(int id);
    virtual ~Person();

private:
    string name;
    int id;

};

#endif