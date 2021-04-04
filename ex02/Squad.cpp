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
		this->_units[i] = right._units[i]->clone();
	this->_cap = right._cap;
	this->_num = right._num;
}

Squad::~Squad()
{
	int i = -1;
	while (++i < this->_num)
		delete this->_units[i];
	delete this->_units;
}

Squad & Squad::operator=(const Squad &right)
{
	int i = -1;

	if (this == &right)
		return (*this);
	while (++i < this->_num)
		delete this->_units[i];
	delete this->_units;
	i = -1;
	this->_units = new ISpaceMarine*[right._cap];
	while (++i < right._cap)
		this->_units[i] = right._units[i]->clone();
	this->_num = right._num;
	this->_cap = right._cap;
	return (*this);
}

int Squad::getCount() const
{
	return (_num);
}

ISpaceMarine* Squad::getUnit(int count) const
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
	int i = 0;

	if (!unit)
		return (this->_num);
	if (!this->_units)
	{
		this->_units = new ISpaceMarine*[this->_cap];
		this->_units[0] = unit;
		this->_num = 1;
		while (++i < this->_cap)
			this->_units[i] = NULL;
		return (this->_num);
	}
	while (++i < this->_num)
	{
		if (this->_units[i] == unit)
			return (this->_num);
	}
	i = -1;
	if (this->_num >= this->_cap)
	{
		int i = -1;
		ISpaceMarine **newer;
		newer = new ISpaceMarine*[this->_cap + 10];
		this->_cap += 10;
		while (++i < this->_num)
			newer[i] = this->_units[i];
		newer[this->_num] = unit;
		while (++i < this->_cap)
			newer[i] = NULL;
		delete [] this->_units;
		this->_num++;
		this->_units = newer;
		return (this->_num);
	}
	this->_units[this->_num] = unit;
	this->_num++;
	return (this->_num);
}
