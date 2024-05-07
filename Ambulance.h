#ifndef AMBULANCE_H
#define AMBULANCE_H
#include "personClasses/Doctor.h"
#include "personClasses/Nurse.h"
#pragma once

class Ambulance
{
public:
    Ambulance(int id);
    ~Ambulance();

private:
    int id;
    Doctor* currentDoctor;
    Nurse* currentNurse;

};

#endif