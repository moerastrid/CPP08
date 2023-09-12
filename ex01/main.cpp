#include <iostream>
#include <unistd.h>

#include "Span.hpp"

int main() {
	std::cout << " - - - SPaN - - - " << std::endl;

	Span	test(1);

	std::cout << " - - - THE END - - - " << std::endl;
	for (int i(0); i <= 4; i++) {
		sleep(1);
		std::cout << std::endl;
	}
	std::cout << " don't forget to like & subscribe " << std::endl;
	return (0);
}