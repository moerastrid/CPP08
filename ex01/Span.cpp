#include "Span.hpp"

// PRIVATE

Span::Span() {
	_size = 0;
	_shortest = 0;
	_longest = 0;
}

Span & Span::operator= (const Span &src) {
	_size = src._size;
	_shortest = src._shortest;
	_longest = src._longest;
	return (*this);
}

// PUBLIC

Span::Span(unsigned int size) : _size(size) {
	_shortest = 0;
	_longest = 0;
}

Span::~Span () {
}