#ifndef AMBULANCE_H
#define AMBULANCE_H
#pragma once

class Doctor;
class Nurse;

class Ambulance
{
public:
    Ambulance(int id);
    void assignDoctor(Doctor* doctor);
    void assignNurse(Nurse* nurse);
    int getId();
    ~Ambulance();

private:
    int id;
    Doctor* currentDoctor;
    Nurse* currentNurse;

};

#endif