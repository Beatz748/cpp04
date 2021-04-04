#include "Enemy.hpp"

Enemy::Enemy() : _type(""), _HP(0)
{

}

Enemy::~Enemy()
{
	std::cout << getType() << " is delted )= " << std::endl;
}

Enemy& Enemy::operator=(Enemy const& right)
{
	this->_type = right.getType();
	this->_HP = right.getHP();
	return *this;
}

Enemy::Enemy(int hp, std::string const & type) : _type(type), _HP(hp)
{

}


Enemy::Enemy(Enemy const& right)
{
	*this = right;
}
std::string	Enemy::getType() const
{
	return (this->_type);
}

int			Enemy::getHP() const
{
	return (this->_HP);
}

void	Enemy::takeDamage(int num)
{
	if (_HP < 0)
		return ;
	_HP -= num;
}
