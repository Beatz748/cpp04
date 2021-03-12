#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	private:

	public:
		~PlasmaRifle();
		PlasmaRifle();
	PlasmaRifle& operator=(PlasmaRifle const& right);
	PlasmaRifle(PlasmaRifle const& right);
	void attack() const;
};

#endif
