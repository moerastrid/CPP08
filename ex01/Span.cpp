#include "Span.hpp"

// PRIVATE

void Span::message(std::string str) {
	(void)str;
	//std::cout << "\x1B[36m" << "SPAN - " << str << "\x1B[0m" << std::endl;
}

Span::Span() {
	_max_size = 0;
	message("default constructor");
}

Span &Span::operator=(const Span &src) {
	_max_size = src._max_size;
	message("= sign operator");
	return (*this);
}

Span::Span(const Span &src) {
	*this = src;
}

// PUBLIC

Span::Span(unsigned int max_size) : _max_size(max_size) {
}

Span::~Span () {
	_store.clear();
	message("default destructor");
}

void	Span::addNumber(int n) {
	message("addNumber");
	if (_store.size() == _max_size)
		throw SpanOverloadException();
	_store.push_back(n);
}

long int	Span::shortestSpan() {
	long int answer;
	unsigned int size = _store.size();
	if (size == 0 || size == 1)
		throw SpanNotPossibleException();

	std::sort(_store.begin(), _store.end());

	long int	temp_one = _store[0];
	long int	temp_two = _store[1];
	answer = temp_two - temp_one;
	for (unsigned int i(2); i < size; i++) {
		temp_one = temp_two;
		temp_two = _store[i];
		if (temp_two - temp_one < answer)
			answer = temp_two - temp_one;
	}
	return (answer);
}

long int	Span::longestSpan() {
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
	return ("Span exception : not possible (size of 0 or 1)");
}
