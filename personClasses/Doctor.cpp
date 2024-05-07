#include "Doctor.h"

Doctor::Doctor(string name):Person(name)
{
    this->isInAmbulance = false;
}

string Doctor::getType()
{
    return "Doctor";
}

void Doctor::setPatient(Patient *patient)
{
    this->currentPatient = patient;
}

void Doctor::makeDiagnose(string name, vector<string> symptoms,  vector<string> treatments)
{
    Diagnose* diagnose = new Diagnose(name);
    for(string symptom : symptoms){
        diagnose->addSymptom(symptom);
    }

    for(string treatment : treatments){
        diagnose->addTreatment(treatment);
    }
    
    this->currentPatient->setDiagnose(diagnose);
    this->setPatient(nullptr);
}

void Doctor::leaveAmbulance()
{
    this->isInAmbulance = false;
}

Doctor::~Doctor()
{

}