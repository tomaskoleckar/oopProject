#include "Nurse.h"
#include "../Hospital.h"
#include "../Ambulance.h"

Nurse::Nurse(string name, Hospital* hospital):Person(name)
{
    this->hospital = hospital;
}

string Nurse::getType()
{
    return "Nurse";
}

void Nurse::workInAmbulance(int id)
{
    Ambulance* ambulance = this->hospital->getAmbulance(id);
    
    if (ambulance != nullptr && !this->isInAmbulance)
    {
        this->isInAmbulance = true;
        ambulance->assignNurse(this);
    }
}

Nurse::~Nurse()
{

}