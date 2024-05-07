#include "Diagnose.h"

Diagnose::Diagnose(string name)
{
    this->name = name;
}

void Diagnose::addSymptom(string symptom)
{
    this->symptoms.push_back(symptom);
}

void Diagnose::addTreatment(string treatment)
{
    this->treatments.push_back(treatment);
}

Diagnose::~Diagnose()
{

}