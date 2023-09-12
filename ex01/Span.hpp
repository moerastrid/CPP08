#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span {
	private :
		unsigned int		_size;
		unsigned long int	_shortest;
		unsigned long int	_longest;
		Span();		//default constructor

	public :
		Span(unsigned int size);
		~Span();	//default destructor
		Span &operator=(const Span &src);
		Span(const Span &src);
		
		unsigned long int	shortestSpan();
		unsigned long int	longestSpan();

};

#endif