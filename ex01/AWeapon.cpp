#include "AWeapon.hpp"

AWeapon::AWeapon() : _name(std::string()),
	_apcost(0), _damage(0)
{

}

AWeapon::~AWeapon()
{

}

AWeapon& AWeapon::operator=(AWeapon const& right)
{
	this->_name = right.getName();
	this->_damage = right.getDamage();
	this->_apcost = right.getAPCost();
	return *this;
}

AWeapon::AWeapon(const AWeapon & right) : _name(right.getName()),
	_damage(right.getDamage()), _apcost(right.getAPCost())
{

}


AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name),
	_apcost(apcost), _damage(damage)
{

}

std::string AWeapon::getName() const
{
	return (_name);
}

int AWeapon::getAPCost() const
{
	return (_apcost);
}

int AWeapon::getDamage() const
{
	return (_damage);
}
