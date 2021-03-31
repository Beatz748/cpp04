#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	private:

	public:
		TacticalMarine();
		virtual ~TacticalMarine();
		TacticalMarine& operator=(TacticalMarine const& right);
		TacticalMarine(TacticalMarine const& right);
		ISpaceMarine *clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif
