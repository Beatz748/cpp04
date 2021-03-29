#ifndef KARINA_HPP
#define KARINA_HPP

# include "Victim.hpp"

class Victim;

class	Karina : public Victim
{
	private:
		Karina();
	public:
		~Karina();
		Karina(std::string name);
	Karina& operator=(Karina const& right);
	Karina(Karina const& right);
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &in, const Karina &karina);

#endif
