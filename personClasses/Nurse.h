#ifndef NURSE_H
#define NURSE_H

#include "Person.h"

#pragma once

class Nurse:Person
{
public:
    Nurse(string name);
    string getType();
    ~Nurse();

private:

};

#endif