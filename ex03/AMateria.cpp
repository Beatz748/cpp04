#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{

}

AMateria::AMateria(const AMateria & right)
{
	*this = right;
}

AMateria::~AMateria()
{

}

AMateria & AMateria::operator=(const AMateria &right)
{
	if (this == &right)
		return (*this);
	this->_type = right.getType();
	this->_xp = right.getXP();
	return (*this);
}

unsigned int AMateria::getXP() const{
	return (this->_xp);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	this->_xp += 10;
	(void)(target);
}

