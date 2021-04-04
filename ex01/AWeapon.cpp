#include "AWeapon.hpp"

AWeapon::AWeapon() : _name(" "),_AP(0), _damage(0)
{

}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _AP(apcost), _damage(damage)
{
	
}

AWeapon::~AWeapon()
{
	std::cout << getName() << " weapon deleted! " << std::endl;
}

AWeapon& AWeapon::operator=(AWeapon const& right)
{
	this->_name = right.getName();
	this->_damage = right.getDamage();
	this->_AP = right.getAPCost();

	return *this;
}

AWeapon::AWeapon(AWeapon const& right)
{
	*this = right;
}

std::string		AWeapon::getName() const
{
	return (this->_name);
}

int				AWeapon::getAPCost() const
{
	return (this->_AP);
}

int				AWeapon::getDamage() const
{
	return (this->_damage);
}
