#include "Patient.h"
#include "../Hospital.h"

Patient::Patient(string name, Hospital* hospital):Person(name)
{
    this->hospital = hospital;
}

string Patient::getType()
{
    return "Patient";
}

void Patient::setDiagnose(Diagnose *diagnose)
{
    this->diagnose.push_back(diagnose);
}

void Patient::examinate()
{
    bool freeAmbulance = false;
    for(Ambulance* ambulance : hospital->getAmbulances()){
        if(ambulance->getPatient() == nullptr && ambulance->getDoctor() != nullptr){
            this->examinate(ambulance);
            freeAmbulance = true;
            break;           
        }
    }
    if(!freeAmbulance){
        cout << "No available ambulance right now !" << endl;
    }
}

void Patient::printDiagnose()
{
    if(this->diagnose.size() != 0){
    cout << "Patient " << this->getName() << " has diagnoses : " << endl;
    for(Diagnose* dia : this->diagnose){
        dia->printDiagnose();
    }
    }
}

void Patient::examinate(Ambulance * ambulance)
{
    ambulance->assignPatient(this);
    ambulance->cure();
}

Patient::~Patient()
{

}