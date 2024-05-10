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
}

Patient::~Patient()
{

}