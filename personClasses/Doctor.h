#ifndef DOCTOR_H
#define DOCTOR_H
#include "Person.h"
#include "Patient.h"
#pragma once

class Doctor:Person
{
public:
    Doctor(string name);
    string getType();
    void setPatient(Patient* patient);
    void workInAmbulance(int id);
    void makeDiagnose(string name,vector<string> symptoms, vector<string> treatments);
    void leaveAmbulance();
    ~Doctor();

private:
    Patient* currentPatient;
    bool isInAmbulance;
};

#endif