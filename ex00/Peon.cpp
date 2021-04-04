#include "Peon.hpp"

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(Peon const &right)
{
	this->_name = right.getName();
	return *this;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

void	Peon::getPolymorphed() const
{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}

Peon::Peon(Peon const& right) : Victim(right.getName())
{
	std::cout << "Zog zog." << std::endl;
}
