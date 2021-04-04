#ifndef ENEMY_HPP
#define ENEMY_HPP

# include <string>
# include <iostream>

class	Enemy
{
	private:
		std::string	_type;
		int			_HP;

	public:
		virtual ~Enemy();
		Enemy();
		Enemy(int hp, std::string const & type);
	Enemy& operator=(Enemy const& right);
	Enemy(Enemy const& right);
	std::string getType() const;
	int		getHP() const;

	virtual void takeDamage(int num);
};

#endif
