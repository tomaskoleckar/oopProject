#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include "Diagnose.h"
#include "../Ambulance.h"
#pragma once

class Hospital;

//Reprezentuje třídu Patient - pacient

class Patient : public Person
{
public:
    Patient(string name, Hospital* hospital);
    string getType();
    void setDiagnose(Diagnose* diagnose);
    void examinate();
    void printDiagnose();
    void examinate(Ambulance* ambulance);
    ~Patient();

private:
    vector<Diagnose*> diagnose;
    Hospital* hospital;
};

#endif