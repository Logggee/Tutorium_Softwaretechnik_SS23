#include <string>
#include <iostream>
#include "Mensch.hpp"

using namespace std;

Mensch::Mensch()
{
	name = "Max Mustermann";
	groesse = 180;
	gewicht = 80;
}

Mensch::Mensch(std::string name, int groesse, int gewicht)
{
	this->name = name;
	this->groesse = groesse;
	this->gewicht = gewicht;
}

Mensch::~Mensch()
{

}

void Mensch::print()
{
	cout << "Name: " << name << endl;
	cout << "Größe: " << groesse << endl;
	cout << "Gewicht: " << gewicht << endl;
}
