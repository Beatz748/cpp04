#include "Girl.hpp"

Girl::Girl() : Victim("")
{
	std::cout << "hi"
		<< std::endl;
}

Girl::Girl(Girl const& right) : Victim(right)
{
	
}
Girl::~Girl()
{
	std::cout << "bye!"
		<< std::endl;
}

Girl& Girl::operator=(Girl const& right)
{
	return *this;
}

Girl::Girl(std::string const & name) : Victim(name)
{
	std::cout << "hi"
		<< std::endl;
}

void	Girl::getPolymorphed() const
{
	std::cout << get_name() <<  " is my name )"
		<< std::endl;
}
