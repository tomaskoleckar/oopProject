#include "Ambulance.h"
#include "personClasses/Doctor.h"
#include "personClasses/Nurse.h"
#include "personClasses/Patient.h"

Ambulance::Ambulance(int id)
{
    this->id = id;
    this->currentDoctor = nullptr;
    this->currentNurse = nullptr;
    this->currentPatient = nullptr;
    this->isOccupied = false;
}

void Ambulance::assignDoctor(Doctor *doctor)
{
    this->currentDoctor = doctor;
}

void Ambulance::assignNurse(Nurse *nurse)
{
    this->currentNurse = nurse;
}

void Ambulance::assignPatient(Patient *patient)
{
    this->currentPatient = patient;
}

Doctor *Ambulance::getDoctor()
{
    return this->currentDoctor;
}

Patient *Ambulance::getPatient()
{
    return this->currentPatient;
}

void Ambulance::cure() {
    this->isOccupied = true;
    this->currentDoctor->setPatient(this->currentPatient);
    this->currentDoctor->makeDiagnose();
    std::cout << "The doctor " << this->currentDoctor->getName();
    
    if (this->currentNurse != nullptr) {
        std::cout << " with the help of nurse " << this->currentNurse->getName();
        std::cout << " are curing patient ";
    } else {
        std::cout << " is curing patient ";
    }
    
    std::cout << this->currentPatient->getName() << " in ambulance " << this->getId() << std::endl;
    
    this->currentPatient->printDiagnose();
}

int Ambulance::getId()
{
    return this->id;
}

Ambulance::~Ambulance()
{

}