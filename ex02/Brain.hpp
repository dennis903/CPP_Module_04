#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>
class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &_Brain);
		~Brain();
		Brain &operator = (const Brain &_Brain);
		void		setIdeas(int idx, const std::string &idea);
		std::string	getIdea(int idx) const;
};
#endif