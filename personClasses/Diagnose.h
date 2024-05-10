#ifndef DIAGNOSE_H
#define DIAGNOSE_H

#include "iostream"
#include "vector"
#pragma once

using namespace std;

class Diagnose
{
public:
    Diagnose(string name);
    void addSymptom(string symptom);
    void addTreatment(string treatment);

    void printDiagnose();
    ~Diagnose();

private:
    string name;
    vector<string> symptoms;
    vector<string> treatments;
};

#endif