#include "Ambulance.h"

Ambulance::Ambulance(int id)
{
    this->id = id;
    this->currentDoctor = nullptr;
    this->currentNurse = nullptr;
}

Ambulance::~Ambulance()
{

}