#ifndef SORCERER_HPP
#define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Victim;

class	Sorcerer
{
	private:
		std::string _name;
		std::string _title;
		Sorcerer();
	public:
		virtual ~Sorcerer();
		Sorcerer(std::string name, std::string title);
	Sorcerer &operator=(Sorcerer const &right);
	Sorcerer(Sorcerer const& right);
	std::string	getName() const;
	std::string getTitle() const;
	void polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream & in, const Sorcerer & sorcerer);

#endif
