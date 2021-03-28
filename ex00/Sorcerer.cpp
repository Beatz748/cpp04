#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{

}

Sorcerer::~Sorcerer()
{

}

Sorcerer& Sorcerer::operator=(Sorcerer const& right)
{
	return *this;
}

Sorcerer::Sorcerer()
{

}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}


