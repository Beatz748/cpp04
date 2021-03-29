#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{

}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const& right)
{
	this->_name = right.getName();
	this->_damage = right.getDamage();
	this->_apcost = right.getAPCost();

	return *this;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & right) : AWeapon(right)
{

}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouu *" << std::endl;
}
