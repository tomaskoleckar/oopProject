#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "personClasses/Person.h"
#include "personClasses/Patient.h"
#include "personClasses/Doctor.h"
#include "personClasses/Nurse.h"
#include "Ambulance.h"
#include "Address.h"
#include "vector"

#pragma once

class Hospital
{
public:
    Hospital(string name, string city, string street, string houseNumber, int ambulanceCount);


    void addPerson(Person* person);
    void createAmbulance();


    ~Hospital();

private:
    string name;
    Address* address;


    std::vector<Ambulance*> ambulances;
    std::vector<Patient*> patients;
    std::vector<Doctor*> doctors;
    std::vector<Nurse*> nurses;
};

#endif