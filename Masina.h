#pragma once
#include <string>
#include <iostream>

class Masina
{
public:
	int an_fabricatie;
	int numar_locuri;
	std::string model;
	void accelereaza();
	void printCarInfo();
};

