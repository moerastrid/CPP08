#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Span {
	private :
		unsigned int		_max_size;
		std::vector<int>	_store;

		Span();								//default constructor
		Span(const Span &src);				//copy constructor
		Span &operator=(const Span &src);	// = sign operator
		void	message(std::string str);

	public :
		Span(unsigned int max_size);		//constructor
		~Span();							//default destructor
		
		void				addNumber(int n);
		long int			shortestSpan();
		long int	longestSpan();

		template<typename C>
		requires (
			requires {
				typename C::iterator;
				typename C::value_type; 
			} 
			&& std::same_as<typename C::value_type, int>
		)
		void	addRange(C cont)  {
			std::vector<int>::iterator it;

			it = _store.begin();
			it = _store.insert(it, cont.begin(), cont.end());
		}

		class SpanOverloadException : public std::exception {
    		virtual const char * what() const throw() ;
		};
		class SpanNotPossibleException : public std::exception {
    		virtual const char * what() const throw() ;
		};
};

#endif