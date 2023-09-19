#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <string>
#include <deque>
#include <iterator>

template<typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	private :
		void	message(std::string str);

	public :
		MutantStack();								// default constructor
		~MutantStack();								// default destructor
		MutantStack(MutantStack &src);				//copy constructor
		MutantStack	&operator= (MutantStack &src);	// assignment operator

		class	iterator : public Container::iterator {
			private :
				void	message(std::string str);

			public :
				iterator();
				~iterator();
				iterator(iterator &src);
				iterator &operator= (iterator &src);
		};
		
		iterator begin(void);
		iterator end(void);
};

#include "MutantStack.tpp"

#endif 