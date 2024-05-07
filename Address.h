#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#pragma once

using namespace std;

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