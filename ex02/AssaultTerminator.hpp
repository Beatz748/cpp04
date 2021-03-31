#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	private:

	public:
		AssaultTerminator();
		virtual ~AssaultTerminator();
		AssaultTerminator& operator=(AssaultTerminator const& right);
		AssaultTerminator(AssaultTerminator const& right);
		ISpaceMarine *clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif
