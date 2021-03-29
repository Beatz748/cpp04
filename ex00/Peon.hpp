#ifndef PEON_HPP
#define PEON_HPP

# include "Victim.hpp"

class	Peon : public Victim
{
	private:
		Peon();
	public:
		virtual ~Peon();
		Peon(std::string name);
	Peon& operator=(Peon const& right);
	Peon(Peon const& right);
	virtual void getPolymorphed() const;
};

#endif
