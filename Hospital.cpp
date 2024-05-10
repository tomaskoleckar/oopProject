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

Hospital::~Hospital()
{

}