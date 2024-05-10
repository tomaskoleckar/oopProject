#include "Ambulance.h"

Ambulance::Ambulance(int id)
{
    this->id = id;
    this->currentDoctor = nullptr;
    this->currentNurse = nullptr;
}

void Ambulance::assignDoctor(Doctor *doctor)
{
    this->currentDoctor = doctor;
}

void Ambulance::assignNurse(Nurse *nurse)
{
    this->currentNurse = nurse;
}

int Ambulance::getId()
{
    return this->id;
}

Ambulance::~Ambulance()
{

}