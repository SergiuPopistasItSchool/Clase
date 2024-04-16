#include "ContBancar.h"

void ContBancar::printInfoCont()
{
	std::cout << "Titularul Contului " << nume_utilizator << " " << prenume_utilizator << std::endl;
	std::cout << "Valuare sold: " << sold << std::endl;
}

void ContBancar::initCont()
{
	if (nume_utilizator.empty() && prenume_utilizator.empty())
	{
		std::cout << "Intdoduceti numele utilizatorului\n";
		std::cin >> nume_utilizator;
		std::cout << "Intdoduceti prenumele utilizatorului\n";
		std::cin >> prenume_utilizator;
		std::cout << "Introduceti soldul initial" << std::endl;
		std::cin >> sold;
	}
	else
	{
		std::cout << "Error!! Contul este deja initializat" << std::endl;
	}
}

bool ContBancar::depunereSuma(int suma)
{
	if (sold > -1)
	{
		sold += suma;
		return true;
	}
	return false;
}
