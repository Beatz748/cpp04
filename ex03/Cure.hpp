#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
class Cure : public AMateria
{
	private:

	public:
		Cure & operator=(const Cure & right);
		Cure();
		Cure(const Cure & right);
		virtual ~Cure();
		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif
