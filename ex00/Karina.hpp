#ifndef EX_HPP
#define EX_HPP

class	Karina
{
	private:
	const std::string _name;
	const std::string _title;
	Karina();
	public:
		~Karina();
		Karina(std::string name, std::string title);
	Karina& operator=(Karina const& right);
	Karina(Karina const& right);
};

#endif
