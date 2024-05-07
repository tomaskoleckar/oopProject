#include "Patient.h"

Patient::Patient(string name):Person(name)
{
}

string Patient::getType()
{
    return "Patient";
}

void Patient::setDiagnose(Diagnose *diagnose)
{
    this->diagnose.push_back(diagnose);
}

Patient::~Patient()
{

}