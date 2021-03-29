#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{

}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << getName() << ", " << getTitle()
	<<", is dead! Consequences will never be the same!" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const& right)
{
	this->_name = right.getName();
	this->_title = right.getTitle();
	return *this;
}

Sorcerer::Sorcerer(const Sorcerer & right) : _name(right.getName()), _title(right.getTitle())
{
	std::cout << getName() << ", " << getTitle() << ", is born!" << std::endl;
}

std::string Sorcerer::getName() const
{
	return (_name);
}

std::string Sorcerer::getTitle() const
{
	return (_title);
}

void	Sorcerer::polymorph(Victim const & vic) const
{
	vic.getPolymorphed();
}

std::ostream &operator<<(std::ostream & in, const Sorcerer & sorcerer)
{
	in << "I am " << sorcerer.getName() << ", "
	<< sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (in);
}