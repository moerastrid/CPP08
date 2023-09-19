#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <string>
#include <deque>
#include <iterator>

template<typename T, class Container = std::deque<T>>
class MutantStack : public std::stack<T, Container> {
	private :
		Container	c;
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
		// iterator end(void);
};

#include "MutantStack.tpp"


// LUCAS HIS VERSION
// template<class T, class C = std::deque<T> >
// class MutantStack: public std::stack<T, C> {
// 	public:
// 		typedef typename C::iterator	iterator;

// 		MutantStack(): std::stack<T, C>() {}
// 		MutantStack(const MutantStack<T, C> &other): std::stack<T, C>(other) {};
// 		virtual ~MutantStack() {}
// 		using std::stack<T, C>::operator=;

// 		iterator begin() throw() {
// 			return std::stack<T, C>::c.begin();
// 		}

// 		iterator end() throw() {
// 			return std::stack<T, C>::c.end();
// 		}
// };

#endif 