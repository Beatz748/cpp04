#include "Victim.hpp"

Victim::Victim()
{

}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim& Victim::operator=(Victim const& right)
{
	this->_name = right.getName();
	return *this;
}

Victim::Victim(Victim const& right) : Victim(right.getName())
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

std::string Victim::getName() const
{
	return (_name);
}

std::ostream &operator<<(std::ostream & in, const Victim & sorcerer)
{
	in << "I'm " << sorcerer.getName() << " and I like otters!" << std::endl;
	return in;
}

void	Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}