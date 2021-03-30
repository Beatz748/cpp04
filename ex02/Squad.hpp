#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		ISpaceMarine **_units;
		int 						_num;
		int 						_cap;
	public:
		Squad();
		Squad(Squad const & right);
		Squad & operator=(const Squad & right);
		int getCount() const;
		~Squad();
		ISpaceMarine* getUnit(int count);
		int push(ISpaceMarine *unit);
};

#endif
