#include "Karina.hpp"

Karina::Karina()
{

}

Karina::~Karina()
{
	std::cout << this->getName() << ", is leaving" << std::endl;
}

Karina& Karina::operator=(Karina const& right)
{
	this->_name = right.getName();
	return *this;
}

Karina::Karina(std::string name) : Victim(name)
{
	std::cout << name << ", is girl" << std::endl;
}

void 	Karina::getPolymorphed() const
{
	std::cout << this->getName() << " like pancakes" << std::endl;
}

std::ostream &operator<<(std::ostream &in, const Karina &karina)
{
	in << karina.getName() << " in operator<<; good luck " << std::endl;
	return (in);
}
