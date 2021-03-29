#include "Karina.hpp"

Karina::Karina() : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Karina::~Karina()
{
	std::cout << name << ", " << title
	<<", is dead! Consequences will never be the same!" << std::endl;
}

Karina& Karina::operator=(Karina const& right)
{
	return *this;
}

Karina::Karina()
{

}
