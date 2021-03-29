#ifndef EX_HPP
#define EX_HPP

# include <string>
# include <iostream>

class AWeapon
{
	protected:
		AWeapon();
		std::string _name;
		int 				_apcost;
		int 				_damage;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon & right);
		virtual ~AWeapon();
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		AWeapon& operator=(AWeapon const& right);
		virtual void attack() const = 0;
};

#endif
