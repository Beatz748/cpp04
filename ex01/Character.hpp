#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"
class	Character
{
	private:
		std::string	_name;
		AWeapon		*_weapon;
		int			_AP;
	public:
		Character(std::string const & name);
		virtual ~Character();
		Character();
	Character& operator=(Character const& right);
	Character(Character const& right);
	void	recoverAP();
	void	equip(AWeapon* weapon);
	void	attack(Enemy* enemy);
	AWeapon*	getWeapon() const;
	int			getAP() const;
	std::string	const & getName() const;
};

std::ostream & operator<<(std::ostream & ins, Character const & right);

#endif
