#ifndef AWEAPON_HPP
#define AWEAPON_HPP

# include <string>
# include <iostream>

class	AWeapon
{
	private:
		std::string _name;
		int _AP;
		int _damage;
	public:
		virtual ~AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon();
		AWeapon& operator=(AWeapon const& right);
		AWeapon(AWeapon const& right);
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif
