#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <string>
# include <iostream>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		Character();
		AMateria *_inventory[4];
		std::string _name;
	public:
		Character(std::string name);
		Character(const Character & right);
		virtual ~Character();
		Character & operator=(const Character & right);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
