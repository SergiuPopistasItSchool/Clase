#include <iostream>
#include <string>
#include "Masina.h"
#include "ContBancar.h"

class dateOfBirth
{
private:
    int dayOfBirth;
    int yearOfBirth;
    std::string MonthOfBirth;
public:
    dateOfBirth()
    {
        dayOfBirth = 0;
        yearOfBirth = 0;
        MonthOfBirth = "";
    }
    dateOfBirth(int dayOfBirth,int yearOfBirth, std::string MonthOfBirth)
    {
        this->dayOfBirth = dayOfBirth;
        this->yearOfBirth = yearOfBirth;
        this->MonthOfBirth = MonthOfBirth;
    }
    int calcualteAge()
    {
        std::cout << "Age is " << "To DO" << std::endl;
    }
    void printDateOfBirth()
    {
        std::cout << "Day: " << dayOfBirth << " Month: " << MonthOfBirth << " year: " << yearOfBirth << std::endl;
    }
};

class Persoana
{
private:
    //atribute
    int varsta;
    std::string Nume;
public:
    Persoana(std::string Nume, int varsta, int dayOfBirth,int yearOfBirth, std::string MonthOfBirth)
    {
        //operatorul this este ca un pointer catre propria instanta
        this->Nume = Nume;
        this->varsta = varsta;
        m_date_of_birht = dateOfBirth(dayOfBirth,yearOfBirth,MonthOfBirth);
    }
    //metoda
    void printInfo()
    {
        std::cout << "Salut ma cheama " << Nume << " si am " << varsta << " ani\n";
        m_date_of_birht.printDateOfBirth();
    }

    dateOfBirth m_date_of_birht;//m_date_of_birt este un agregat a lui Persoana

};

class myClass
{
    int my_var;
    std::string my_string;
public:
    myClass() // constructor
    {
        std::cout << "un obiect myClass a fost creat\n";
        my_var = 10;
        my_string = "myClass";
    }
    myClass(int var, std::string input_string)
    {
        std::cout << "un obiect myClass a fost creat\n";
        my_var = var;
        my_string = input_string;
    }

    ~myClass() // destructor
    {
        std::cout << "un obiect myClass a fost distrus\n";
    }

    void printData()
    {
        std::cout << "Val lui myVar este " << my_var << std::endl;
        std::cout << "Val lui my_string este " << my_string << std::endl;
    }
};



int main()
{
    myClass obj;
    obj.printData();
    //inca un mod de a creea obiecte in C++
    myClass obj2 = myClass(10,"Obj2");
    obj2.printData();
    /*
    myClass obj2;
    obj2 = myClass(45, "Obiectul 2");
    */

    Persoana p1 = Persoana("Sergiu", 22 ,14,1991,"June");

    p1.printInfo();

    Masina m;
    m.an_fabricatie = 2023;
    m.numar_locuri = 5;
    m.model = "SsangYong";
    m.printCarInfo();
    m.accelereaza();

    ContBancar c1;
    c1.initCont();
    c1.printInfoCont();
    c1.depunereSuma(1000);
    c1.printInfoCont();
    c1.depunereSuma(-498);
    Persoana p2 = Persoana("Stefan", 31, 12, 1991, "June");
}