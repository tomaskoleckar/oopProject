#include "Doctor.h"

Doctor::Doctor(string name, Hospital* hospital):Person(name)
{
    this->isInAmbulance = false;
    this->hospital = hospital;
}

string Doctor::getType()
{
    return "Doctor";
}

void Doctor::setPatient(Patient *patient)
{
    this->currentPatient = patient;
}

void Doctor::workInAmbulance(int id)
{
    
    if(this->hospital->getAmbulance(id) != nullptr && )
    this->isInAmbulance = true;

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