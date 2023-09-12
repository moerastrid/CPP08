#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Span {
	private :
		unsigned int		_max_size;
		unsigned long int	_shortest;
		unsigned long int	_longest;
		std::vector<int>	_store;

		Span();								//default constructor
		Span(const Span &src);				//copy constructor
		Span &operator=(const Span &src);	// = sign operator
		void	message(std::string str);

	public :
		Span(unsigned int max_size);
		~Span();	//default destructor
		
		void				addNumber(int n);
		long int	shortestSpan();
		unsigned long int	longestSpan();

		class SpanOverloadException : public std::exception {
    		virtual const char * what() const throw() ;
		};
		class SpanNotPossibleException : public std::exception {
    		virtual const char * what() const throw() ;
		};
};

#endif