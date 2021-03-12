#include "Character.hpp"

Character::Character() : _name(""), _weapon(NULL), _AP(40)
{

}

Character::~Character()
{

}

Character& Character::operator=(Character const& right)
{
	this->_name = right.getName();
	this->_AP = right.getAP();
	this->_weapon = right.getWeapon();
	return *this;
}

Character::Character(Character const& right)
{
	*this = right;
}
Character::Character(std::string const & name) : _name(name), _weapon(NULL), _AP(40)
{

}

std::string const & Character::getName() const
{
	return (this->_name);
}

int			Character::getAP() const
{
	return (this->_AP);
}

AWeapon*	Character::getWeapon() const
{
	return (this->_weapon);	
}

void	Character::recoverAP()
{
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
}

void	Character::attack(Enemy *enemy)
{
	int	value = this->_weapon->getAPCost();

	if (enemy->getHP() <= 0)
		delete enemy;
	if (this->_AP >= value && this->_weapon)
	{
		std::cout << getName() << " attacks "
			<< enemy->getType() << " with a "
			<< this->_weapon->getName()
			<< "\"" << std::endl;
		this->_weapon->attack();
		this->_AP -= value;
		enemy->takeDamage(this->_weapon->getDamage());
	}
}

void	Character::equip(AWeapon *weapon)
{
	this->_weapon =	weapon;
}

std::ostream & operator<<(std::ostream & ins, Character const & right)
{
	if (right.getWeapon())
	ins << right.getName() << " has " << right.getAP() << " and wields a "
		<< right.getWeapon()->getName() << std::endl;
	else
		ins << right.getName() << " has " << right.getAP() << " and is unarmed " << std::endl;
	return (ins);
}
