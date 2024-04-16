#include "Masina.h"

void Masina::accelereaza()
{
	std::cout << "Vruum" << std::endl;
}

void Masina::printCarInfo()
{
	std::cout << "Anul fbricatiei: " << an_fabricatie << std::endl;
	std::cout << "Nr locuri: " << numar_locuri << std::endl;
	std::cout << "model : " << model << std::endl;
}
