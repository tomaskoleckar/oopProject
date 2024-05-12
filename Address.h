#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#pragma once

using namespace std;

//Reprezentuje třídu Adress - adresa - pomocná třída pro nemocnici a případně dodělané adresy zaměstnanců a pacientů
class Address
{
public:
    Address(string city, string street, string houseNumber);
    ~Address();

private:
    string city;
    string street;
    string houseNumber;

};

#endif