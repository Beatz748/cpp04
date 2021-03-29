#ifndef POWERFIST_HPP
#define POWERFIST_HPP

# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	private:
	
	public:
		~PowerFist();
		PowerFist();
	PowerFist& operator=(PowerFist const& right);
	PowerFist(PowerFist const& right);
	void attack() const;

};

#endif
