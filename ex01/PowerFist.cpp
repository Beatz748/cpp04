#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::~PowerFist()
{

}

PowerFist& PowerFist::operator=(PowerFist const& right)
{
	this->_name = right.getName();
	this->_damage = right.getDamage();
	this->_apcost = right.getAPCost();

	return *this;
}

PowerFist::PowerFist(const PowerFist & right) : AWeapon(right)
{

}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
