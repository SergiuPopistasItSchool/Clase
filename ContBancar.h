#pragma once
#include <string>
#include <iostream>

//diff intre o structura si o clasa in C++
// struct are by default public iar class private

class ContBancar
{
//o clasa este private by default
	std::string nume_utilizator;
	std::string prenume_utilizator;
	float sold;

public:
	void printInfoCont();
	void initCont();
	bool depunereSuma(int suma);

};

