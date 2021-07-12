#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine 
{
	private:
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &_AssaultTerminator);
		~AssaultTerminator();
		AssaultTerminator &operator = (const AssaultTerminator &_AssaultTerminator);
		ISpaceMarine *clone() const;
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
};
#endif