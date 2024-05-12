#ifndef AMBULANCE_H
#define AMBULANCE_H

#include <chrono>
#include <future>
#include <thread>
#pragma once

class Doctor;
class Nurse;
class Patient;

class Ambulance
{
public:
    Ambulance(int id);
    void assignDoctor(Doctor* doctor);
    void assignNurse(Nurse* nurse);
    void assignPatient(Patient* patient);
    Doctor* getDoctor();
    Patient* getPatient();
    void cure();
    int getId();
    ~Ambulance();

private:
    int id;
    Doctor* currentDoctor;
    Nurse* currentNurse;
    Patient* currentPatient;
    bool isOccupied;
};

#endif