#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		int _size;
		AMateria *_st[4];
	public:
		virtual ~MateriaSource();
	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);
	MateriaSource();
	MateriaSource(const MateriaSource & right);
	MateriaSource & operator=(const MateriaSource & right);
};


#endif
