#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & right)
{
	*this = right;
}

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator &right)
{
	(void)(right);
	return *this;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	ISpaceMarine *newer = new AssaultTerminator(*this);
	return (newer);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout<< "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout<< "* attacks with chainfists *" << std::endl;
}
