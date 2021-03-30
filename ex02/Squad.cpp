#include "Squad.hpp"
#include "ISpaceMarine.hpp"
//#include "ISquad.hpp"

Squad::Squad() : _units(NULL), _num(0), _cap(20)
{

}

Squad::Squad(const Squad & right) 
{
	int i = -1;
	this->_units = new ISpaceMarine*[right._cap];
	while (++i < right._cap)
		this->_units[i] = right._units[i];
	this->_cap = right._cap;
	this->_num = right._num;
}

Squad::~Squad()
{
	int i = -1;
	while (++i < this->_cap)
		delete this->_units[i];
	delete this->_units;
}

Squad & Squad::operator=(const Squad &right)
{
	if (this == &right)
		return (*this);
	this->_units = new ISpaceMarine*[right._cap];
	this->_num = right._num;
	this->_cap = right._cap;
	return (*this);
}

int Squad::getCount() const
{
	return (_num);
}

ISpaceMarine* Squad::getUnit(int count)
{
	if (count < 0 || count >= this->_num)
	{
		std::cout << "BAD NUMBER" << std::endl;
		return (NULL);
	}
	return (this->_units[count]);
}

int Squad::push(ISpaceMarine *unit)
{
	int i = -1;

	if (!unit)
		return (this->_units);
	if (!this->_units)
	{
		this->_units = new ISpaceMarine*[this->_cap];
		this->_units[0] = unit;
		this->_num = 1;
		while (++i < this->_cap)
			this->_units[i] = 
	}
}
