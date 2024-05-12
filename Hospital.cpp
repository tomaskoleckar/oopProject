#include "Hospital.h"

Hospital::Hospital(string name, string city, string street, string houseNumber,int ambulanceCount)
{
    this->name = name;
    this->address = new Address(city,street,houseNumber);
    for(int i = 0;i<ambulanceCount;i++){
        this->createAmbulance();
    }
}

void Hospital::addPerson(Person* person)
{
    if (person->getType() == "Patient")
    {
        person->setId(patients.size());
        patients.push_back(dynamic_cast<Patient *>(person));
    }
    else if (person->getType() == "Doctor")
    {
        person->setId(doctors.size());
        doctors.push_back(dynamic_cast<Doctor *>(person));
    }
    else if (person->getType() == "Nurse")
    {
        person->setId(nurses.size());
        nurses.push_back(dynamic_cast<Nurse *>(person));
    }
}
void Hospital::createAmbulance()
{
    Ambulance* newAmbulance = new Ambulance(this->ambulances.size());
    
    this->ambulances.push_back(newAmbulance);
}

Ambulance* Hospital::getAmbulance(int id)
{
    for(Ambulance* ambulance : ambulances){
        if(ambulance->getId() == id){
            return ambulance;
        }
    }
    return nullptr;
}

std::vector<Ambulance *> Hospital::getAmbulances()
{
    return this->ambulances;
}

Hospital::~Hospital() {
    for (Ambulance* ambulance : ambulances) {
        delete ambulance;
    }
    ambulances.clear();

    for (Patient* patient : patients) {
        delete patient;
    }
    patients.clear();

    for (Doctor* doctor : doctors) {
        delete doctor;
    }
    doctors.clear();

    for (Nurse* nurse : nurses) {
        delete nurse;
    }
    nurses.clear();
    
    delete address;
}