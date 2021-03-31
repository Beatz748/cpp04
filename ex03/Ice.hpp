#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
class Ice : public AMateria
{
	private:

	public:
		Ice & operator=(const Ice & right);
		Ice();
		Ice(const Ice & right);
		virtual ~Ice();
		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif
