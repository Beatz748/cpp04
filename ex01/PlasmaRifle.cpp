#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << getName() << " Plasma deleted "  << std::endl;
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const& right)
{
	AWeapon::operator=(right);
	return *this;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& right) : AWeapon(right)
{
	
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
