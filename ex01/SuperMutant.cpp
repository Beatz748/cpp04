#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant& SuperMutant::operator=(SuperMutant const& right)
{
	Enemy::operator=(right);
	return *this;
}

SuperMutant::SuperMutant(SuperMutant const& right) : Enemy(right)
{

}

void	SuperMutant::takeDamage(int num)
{
	Enemy::takeDamage(num - 3);
}
