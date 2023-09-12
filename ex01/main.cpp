#include <iostream>
#include <unistd.h>

#include "Span.hpp"

int main() {
	std::cout << " - - - SPaN - - - " << std::endl;

	Span	test(30);
	test.addNumber(1);
	test.addNumber(14);
	test.addNumber(-6);
	std::cout << "shortest span " << test.shortestSpan() << std::endl;
	std::cout << "longest span " << test.longestSpan() << std::endl;

	std::cout << " - - - THE END - - - " << std::endl;
	for (int i(0); i <= 4; i++) {
		sleep(1);
		std::cout << std::endl;
	}
	std::cout << " don't forget to like & subscribe " << std::endl;
	return (0);
}
