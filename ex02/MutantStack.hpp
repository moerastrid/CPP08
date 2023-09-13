#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
	private :
		
	public :
		// MutantStack();								// default constructor
		// ~MutantStack();								// default destructor
		// MutantStack(MutantStack &src);				//copy constructor
		// MutantStack	&operator= (MutantStack &src);	// assignment operator
};

#include "MutantStack.tpp"

#endif