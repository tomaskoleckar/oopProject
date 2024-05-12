#ifndef PERSON_H
#define PERSON_H

#include <iostream>

#pragma once

using namespace std;

//Reprezentuje třídu Person - abstraktní třída, ze které dědí všechny osoby v nemocnici

class Person
{
public:
    Person(string name);
    int getId();
    virtual string getType() = 0;
    string getName();
    void setId(int id);
    virtual ~Person();

private:
    string name;
    int id;

};

#endif