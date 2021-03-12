#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <iostream>
# include <string>

class	Victim
{
	private:
		std::string _name;
		Victim();
	public:
	virtual ~Victim();
		Victim(std::string name);
	Victim& operator=(Victim const& right);
	Victim(Victim const& right);
	virtual void			getPolymorphed() const;
	std::string		get_name() const;

};

std::ostream & operator<<(std::ostream & ins, Victim const & right);

#endif
