#include "Span.hpp"

// PRIVATE

void Span::message(std::string str) {
	std::cout << "\x1B[36m" << "SPAN - " << str << "\x1B[0m" << std::endl;
}

Span::Span() {
	_max_size = 0;
	_shortest = 0;
	_longest = 0;
	message("default constructor");
}

Span &Span::operator=(const Span &src) {
	_max_size = src._max_size;
	_shortest = src._shortest;
	_longest = src._longest;
	message("= sign operator");
	return (*this);
}

Span::Span(const Span &src) {
	*this = src;
}

// PUBLIC

Span::Span(unsigned int max_size) : _max_size(max_size) {
	_shortest = 0;
	_longest = 0;
	//std::cout << "vector made, max_size : " << _store.max_size() << std::endl;
	//std::cout << "content :" << std::endl;
	//for (unsigned int i(0); i < max_size; i++)
	//	std::cout << _store[i] << std::endl;
}

Span::~Span () {
	_store.clear();
	message("default destructor");
}

void	Span::addNumber(int n) {
	if (_store.size() == _max_size)
		throw SpanOverloadException();
	_store.push_back(n);
	
	message("add number");
}

unsigned long int	Span::shortestSpan() {
	unsigned long int answer = 0;

	message("shortest");
	unsigned int size = _store.size();
	if (size == 0 || size == 1)
		throw SpanNotPossibleException();
	return (answer);
}

unsigned long int	Span::longestSpan() {
	message("longest");
	unsigned int size = _store.size();
	if (size == 0 || size == 1)
		throw SpanNotPossibleException();

	int lowest = _store[0];
	int highest = _store[0];
	for (unsigned int i(1); i < size; i++) {
		if (_store[i] < lowest)
			lowest = _store[i];
		if (_store[i] > highest)
			highest = _store[i];
	}

	return (highest - lowest);
}

const char * Span::SpanOverloadException::what() const throw() {
	return ("Span exception : overload (max size reached)");
}

const char * Span::SpanNotPossibleException::what() const throw() {
	return ("Span exception : not possible (size = 0 or 1)");
}