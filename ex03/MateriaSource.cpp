#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	int i = -1;

	while (this->_st[++i])
		this->_st[i] = NULL;
	this->_size = 0;
}

MateriaSource::~MateriaSource()
{
	int i = -1;

	while (this->_st[++i])
		delete _st[i];
}

MateriaSource::MateriaSource(const MateriaSource & right)
{
	*this = right;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &right)
{
	int i = -1;

	if (this == &right)
		return (*this);
	while (this->_st[++i])
		delete this->_st[i];
	i = 0;
	while (i < 4 && right._st[i])
	{
		this->_st[i] = right._st[i]->clone();
		i++;
	}
	this->_size = right._size;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->_size < 4 && m)
	{
		this->_st[this->_size] = m->clone();
		this->_size++;
	}
	else
		std::cout << "only 4 mat" << std::endl;
}

AMateria 	*MateriaSource::createMateria(const std::string &type)
{
	int i = 0;

	while (i < 4 && this->_st[i])
	{
		if (this->_st[i]->getType() == type)
			return (this->_st[i]->clone());
		i++;
	}
	std::cout << "no type learned" << std::endl;
	return (NULL);
}
