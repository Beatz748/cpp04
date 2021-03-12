#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80 , "RadScorpion") 
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion& RadScorpion::operator=(RadScorpion const& right)
{
	Enemy::operator=(right);
	return *this;
}

RadScorpion::RadScorpion(RadScorpion const& right) : Enemy(right)
{

}
