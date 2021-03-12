#ifndef PEON_HPP
#define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class	Peon : public Victim
{
	private:
		Peon();
	public:
	virtual ~Peon();
		Peon(std::string const & name);
	Peon& operator=(Peon const& right);
	Peon(Peon const& right);
	void			getPolymorphed() const;

};

#endif
