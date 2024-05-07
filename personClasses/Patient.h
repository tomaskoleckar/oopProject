#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include "Diagnose.h"
#pragma once

class Patient:Person
{
public:
    Patient(string name);
    string getType();
    void setDiagnose(Diagnose* diagnose);
    ~Patient();

private:
    vector<Diagnose*> diagnose;
};

#endif