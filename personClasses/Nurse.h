#ifndef NURSE_H
#define NURSE_H

#include "Person.h"

#pragma once

class Hospital;

class Nurse : public Person
{
public:
    Nurse(string name, Hospital* hospital);
    string getType();
    void workInAmbulance(int id);
    ~Nurse();

private:
    Hospital* hospital;
    bool isInAmbulance;
};

#endif