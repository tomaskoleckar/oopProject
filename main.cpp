#include <iostream>
#include "Hospital.h"
#include "personClasses/Doctor.h"
#include "personClasses/Nurse.h"
#include "personClasses/Patient.h"

int main() {
    Hospital* hospital = new Hospital("Fakultní nemocnice Ostrava", "Ostrava", "17.listopadu", "1790/5", 20);
    
    // Doctors
    Doctor* doctor1 = new Doctor("Jan SSSlivka", hospital);
    hospital->addPerson(doctor1);
    Doctor* doctor2 = new Doctor("Jakub Trouba", hospital);
    hospital->addPerson(doctor2);
    Doctor* doctor3 = new Doctor("Petr Novák", hospital);
    hospital->addPerson(doctor3);

    // Nurses
    Nurse* nurse1 = new Nurse("Natálie Dvořáková", hospital);
    hospital->addPerson(nurse1);
    Nurse* nurse2 = new Nurse("Nela Fialová", hospital);
    hospital->addPerson(nurse2);
    Nurse* nurse3 = new Nurse("Gabriela Peterková", hospital);
    hospital->addPerson(nurse3);

    // Patients
    Patient* patient1 = new Patient("Jan Svoboda", hospital);
    hospital->addPerson(patient1);
    Patient* patient2 = new Patient("Zlom Noha", hospital);
    hospital->addPerson(patient2);
    Patient* patient3 = new Patient("George Simp", hospital);
    hospital->addPerson(patient3);

    doctor1->workInAmbulance(1);
    doctor2->workInAmbulance(5);
    doctor3->workInAmbulance(10);
    
    nurse1->workInAmbulance(1);
    nurse2->workInAmbulance(5);
    nurse3->workInAmbulance(10);

    patient1->examinate();
    patient2->examinate();
    patient3->examinate();

    delete hospital;

    return 0;
}
