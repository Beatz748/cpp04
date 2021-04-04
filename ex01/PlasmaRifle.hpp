#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	private:

	public:
		virtual ~PlasmaRifle();
		PlasmaRifle();
	PlasmaRifle& operator=(PlasmaRifle const& right);
	PlasmaRifle(PlasmaRifle const& right);
	void attack() const;
};

#endif
