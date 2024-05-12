#ifndef DOCTOR_H
#define DOCTOR_H
#include "Person.h"
#include "Patient.h"
#include "../Ambulance.h"
#include <algorithm>
#include <random>
#include <ctime>
#pragma once


class Hospital;

//Reprezentuje třídu Doctor - doktor

class Doctor : public Person
{
public:
    Doctor(string name, Hospital* hospital);
    string getType();
    void setPatient(Patient* patient);
    void workInAmbulance(int id);
    void makeDiagnose();
    void makeDiagnose(string name,vector<string> symptoms, vector<string> treatments);
    void leaveAmbulance();
    ~Doctor();

private:
    Patient* currentPatient;
    bool isInAmbulance;
    Hospital* hospital;

    static std::vector<std::string> symptomsList;
    static std::vector<std::string> treatmentsList;
};

#endif