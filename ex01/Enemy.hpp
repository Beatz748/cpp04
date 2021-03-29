#ifndef EX_HPP
#define EX_HPP

# include <string>
# include <iostream>

class	Enemy
{
	private:

	public:
		Enemy();
	Enemy& operator=(Enemy const& right);
	Enemy(Enemy const& right);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif
