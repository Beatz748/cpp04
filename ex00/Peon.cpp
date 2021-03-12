#include "Peon.hpp"

Peon::Peon() : Victim("")
{
	std::cout << "Zog zog."
		<< std::endl;
}

Peon::Peon(Peon const& right) : Victim(right)
{
	
}
Peon::~Peon()
{
	std::cout << "Bleuark..."
		<< std::endl;
}

Peon& Peon::operator=(Peon const& right)
{
	return *this;
}

Peon::Peon(std::string const & name) : Victim(name)
{
	std::cout << "Zog zog."
		<< std::endl;
}

void	Peon::getPolymorphed() const
{
	std::cout << get_name() <<  " was just polymorphed into a pink pony!"
		<< std::endl;
}
