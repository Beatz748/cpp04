#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string name) : _name(name)
{
	int i = -1;
	while (++i < 4)
		this->_inventory[i] = NULL;
}

Character::~Character()
{
	int i = 0;
	while (i < 4)
		if (_inventory[i] != NULL)
		delete this->_inventory[i++];
}

Character::Character(const Character & right)
{
	*this = right;
}

Character & Character::operator=(const Character & right)
{
	int i = -1;

	if (this == &right)
		return (*this);
	if (this->_inventory[0])
		while (this->_inventory[++i] && i < 4)
			delete this->_inventory[i];
	this->_name = right.getName();
	while (++i < 4)
		this->_inventory[i] = right._inventory[i]->clone();
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void 	Character::equip(AMateria *m)
{
	int i = 0;

	while (i < 4 && this->_inventory[i] && this->_inventory[i] != m)
			i++;
	if (i < 4 && this->_inventory[i] != m)
		this->_inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx <= 0 || idx > 4)
		return ;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
