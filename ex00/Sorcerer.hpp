#ifndef SORCERER_HPP
#define SORCERER_HPP

class	Sorcerer
{
	private:
		const std::string _name;
		const std::string _title;
		Sorcerer();
	public:
		~Sorcerer();
		Sorcerer(std::string name, std::string title);
	Sorcerer& operator=(Sorcerer const& right);
	Sorcerer(Sorcerer const& right);
};

#endif
