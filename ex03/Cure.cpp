# include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure & right) : AMateria(right)
{

}

Cure::~Cure()
{

}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << this->getType() << "’s wounds *" << std::endl;

}

Cure & Cure::operator=(const Cure & right)
{
	if (this == &right)
		return (*this);
	AMateria::operator=(right);
	return (*this);
}
