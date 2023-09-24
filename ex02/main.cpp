#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	exercise_test(){
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "\x1B[35m" << mstack.top() << "\x1B[0m" << std::endl;
	mstack.pop();
	std::cout << "\x1B[35m" << mstack.size() << "\x1B[0m" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << "\x1B[35m" << *it << "\x1B[0m" << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

int	exercise_list(){
	std::list<int>	testlist;
	testlist.push_back(5);
	testlist.push_back(17);

	std::cout << "\x1B[31m" << testlist.back() << "\x1B[0m" << std::endl;
	testlist.pop_back();
	std::cout << "\x1B[31m" << testlist.size() << "\x1B[0m" << std::endl;

	testlist.push_back(3);
	testlist.push_back(5);
	testlist.push_back(737);
	testlist.push_back(0);

	std::list<int>::iterator it = testlist.begin();
	std::list<int>::iterator ite = testlist.end();
	
	++it;
	--it;
	while (it != ite) {
		std::cout << "\x1B[31m" << *it << "\x1B[0m" << std::endl;
		++it;
	}
	std::list<int> s(testlist);
	return 0;
}

int main() {
	MutantStack<int>	test;
	MutantStack<int>	two(test);

	test.push(5);
	std::cout << "start\n";
	std::cout << "test\n";
	if (test.empty() == true)
		std::cout << "empty\n";
	else
		std::cout << test.top() << std::endl;
	std::cout << "two\n";
	if (two.empty() == true)
		std::cout << "empty\n";
	else
		std::cout << two.top() << std::endl;
	two = test;
	std::cout << "two\n";
	if (two.empty() == true)
		std::cout << "empty\n";
	else
		std::cout << two.top() << std::endl;

	std::cout << test << std::endl;

	std::cout << std::endl << "exercise test mutant stack" << std::endl;
	exercise_test();
	std::cout << std::endl << "exercise test list" << std::endl;
	exercise_list();
	return (0);
}
