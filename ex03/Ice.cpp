# include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice & right) : AMateria(right)
{

}

Ice::~Ice()
{

}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << this->getType() << " *" << std::endl;

}

Ice & Ice::operator=(const Ice & right)
{
	if (this == &right)
		return (*this);
	AMateria::operator=(right);
	return (*this);
}
