#ifndef GIRL_HPP
#define GIRL_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class	Girl : public Victim
{
	private:
		Girl();
	public:
	virtual ~Girl();
		Girl(std::string const & name);
	Girl& operator=(Girl const& right);
	Girl(Girl const& right);
	void			getPolymorphed() const;

};

#endif
