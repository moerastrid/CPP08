#include <iostream>
#include <unistd.h>
#include <array>

#include "Span.hpp"

int main() {
	std::cout << " - - - SPaN - - - " << std::endl;
	


	Span	test(30);
	test.addNumber(1);
	test.addNumber(14);
	test.addNumber(-6);
	std::cout << "shortest span " << test.shortestSpan() << std::endl;
	std::cout << "longest span " << test.longestSpan() << std::endl;

	std::vector<int> anothervector(1,400);
	test.addRange(anothervector);

	std::array<int, 5> myarray = {6, 20, 17, -3923, -1};
	test.addRange(myarray);

	// std::vector<char> alphavector (5,'a');
	// test.addRange(alphavector);

	std::cout << "shortest span " << test.shortestSpan() << std::endl;
	std::cout << "longest span " << test.longestSpan() << std::endl;

	Span smallspan(1);
	try {
		smallspan.addNumber(1);
		smallspan.addNumber(2);
	} catch(std::exception &e) {
		std::cerr << "ERROR : " << e.what() << std::endl;
	}
	try {
		long int longe = smallspan.longestSpan();
		std::cout << "longest : " << longe << std::endl;
	} catch(std::exception &e) {
		std::cerr << "ERROR : " << e.what() << std::endl;
	}

	Span bigspan(INT16_MAX);
	std::vector<int> bigvector;
	for (int i = 0; i < 10000; i++) {
		bigspan.addNumber(i);
		bigvector.push_back(i * 3);
	}
	bigspan.addRange(bigvector);
	
	std::cout << "shortest bigspan " << bigspan.shortestSpan() << std::endl;
	std::cout << "longest bigspan " << bigspan.longestSpan() << std::endl;

	std::cout << " - - - THE END - - - " << std::endl;
	for (int i(0); i <= 4; i++) {
		sleep(1);
		std::cout << std::endl;
	}
	std::cout << " don't forget to like & subscribe " << std::endl;
	return (0);
}
