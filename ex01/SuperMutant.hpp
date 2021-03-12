#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	private:

	public:
		~SuperMutant();
		SuperMutant();
	SuperMutant& operator=(SuperMutant const& right);
	SuperMutant(SuperMutant const& right);
	void	takeDamage(int num);
};

#endif
