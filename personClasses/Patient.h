#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include "Diagnose.h"
#pragma once

class Hospital;

class Patient : public Person
{
public:
    Patient(string name, Hospital* hospital);
    string getType();
    void setDiagnose(Diagnose* diagnose);
    void examinate();
    ~Patient();

private:
    vector<Diagnose*> diagnose;
    Hospital* hospital;
};

#endif