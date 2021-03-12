#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

# include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	private:

	public:
		~RadScorpion();
		RadScorpion();
	RadScorpion& operator=(RadScorpion const& right);
	RadScorpion(RadScorpion const& right);
};

#endif
