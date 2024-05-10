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

void Diagnose::printDiagnose()
{
    cout << "Symptoms: " << endl;
    for(string symptom : this->symptoms){
        cout << symptom << endl;
    }
    cout << "Treatments: " << endl;
    for(string treatment : this->treatments){
        cout << treatment << endl;
    }
    cout << endl;

}

Diagnose::~Diagnose()
{
    symptoms.clear();
    treatments.clear();
}