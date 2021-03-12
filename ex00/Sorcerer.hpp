#ifndef SORCERER_HPP
#define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class	Sorcerer
{
	private:
		std::string _name;
		std::string _title;
		Sorcerer();
	public:
		virtual ~Sorcerer();
		Sorcerer(std::string const & name, std::string const & title);
	Sorcerer& operator=(Sorcerer const& right);
	Sorcerer(Sorcerer const& right);
	std::string	get_name() const;
	std::string	get_title() const;
	void		polymorph(Victim const & vic) const;
};

std::ostream & operator<<(std::ostream & ins, const Sorcerer & right);

#endif
