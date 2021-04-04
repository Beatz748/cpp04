#ifndef POWERFIST_HPP
#define POWERFIST_HPP

# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	private:

	public:
		virtual ~PowerFist();
		PowerFist();
	PowerFist& operator=(PowerFist const& right);
	PowerFist(PowerFist const& right);
	void	attack() const;
};

#endif
