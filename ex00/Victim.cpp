#include "Victim.hpp"

Victim::Victim()
{

}

Victim::~Victim()
{
	std::cout << "Victim " << _name <<  " just died for no apparent reason!"
		<< std::endl;
}

Victim& Victim::operator=(Victim const& right)
{
	return *this;
}

Victim::Victim(std::string const name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!"
		<< std::endl;
}

std::ostream & operator<<(std::ostream & ins, Victim const & right)
{
	ins << "I'm " << right.get_name() <<  " and I like otters!"
		<< std::endl;
	return (ins);
}


Victim::Victim(Victim const& right)
{
	*this = right;
}

void	Victim::getPolymorphed() const
{
	std::cout << _name <<  " has been turned into a cute little sheep!"
		<< std::endl;
}

std::string	Victim::get_name() const
{
	return (this->_name);
}
