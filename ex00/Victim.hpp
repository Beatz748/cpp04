#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <string>
# include <iostream>

class	Victim
{
	private:
		Victim();
		std::string _name;
	public:
		virtual ~Victim();
		Victim(std::string name);
	Victim& operator=(Victim const& right);
	Victim(Victim const& right);
	std::string getName() const;
	virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream & in, const Victim & sorcerer);

#endif
