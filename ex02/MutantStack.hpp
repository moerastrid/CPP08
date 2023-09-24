#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {
	private :
        // my debug message
		void	message(std::string str);

        // define 'stack' from default stack
        typedef std::stack<T> stack;

	public :
        // orthodox canonoical form
		MutantStack();								// default constructor
		~MutantStack();						        // default destructor
		MutantStack(MutantStack const &src);				// copy constructor
		MutantStack	&operator= (MutantStack const &src);	// assignment operator

        // define 'iterator' from default iterator
        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin();
        iterator end();
};

template<typename T>
std::ostream 	&operator<<(std::ostream &o, MutantStack<T> &src);

#include "MutantStack.tpp"

#endif 