#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)
{

}

PowerFist::~PowerFist()
{
	std::cout << getName() << " Plasma deleted "  << std::endl;
}

PowerFist& PowerFist::operator=(PowerFist const& right)
{
	AWeapon::operator=(right);
	return *this;
}

PowerFist::PowerFist(PowerFist const& right) : AWeapon(right)
{
	
}

void	PowerFist::attack() const
{
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}
