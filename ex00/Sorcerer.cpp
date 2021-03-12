#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{

}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title
		<< ",  is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const& right)
{
	return *this;
}

Sorcerer::Sorcerer(std::string const & name, std::string const & title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title
		<< ", is born!" << std::endl;
}

std::string Sorcerer::get_name() const
{
	return (this->_name);
}


std::string Sorcerer::get_title() const
{
	return (this->_title);
}

void		Sorcerer::polymorph(Victim const & vic) const
{
	vic.getPolymorphed();
}

std::ostream & operator<<(std::ostream & ins,  const Sorcerer & right)
{
	ins << "I am " << right.get_name() << ", " << right.get_title()
		<< ", and i like ponies" << std::endl;
	return (ins);
}
