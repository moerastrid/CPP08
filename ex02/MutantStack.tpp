#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T, class Container>
void    MutantStack<T, Container>::message(std::string str) {
    std::cout << "\x1B[36m" << "Mutant Stack - " << str << "\x1B[0m" << std::endl;
}

template <typename T, class Container>
MutantStack<T, Container>::MutantStack() {
    message("default constructor");
}

template <typename T, class Container>
MutantStack<T, Container>::~MutantStack() {
    message("default destructor");
}

template <typename T, class Container>
MutantStack<T, Container>::MutantStack(MutantStack &src) {
    message("copy constructor");
    *this = src;
}

template <typename T, class Container>
MutantStack<T, Container>	&MutantStack<T, Container>::operator= (MutantStack &src) {
    message("assingment operator");
    (void)src;
    return (*this);
}

template <typename T, class Container>
void    MutantStack<T, Container>::iterator::message(std::string str) {
    std::cout << "\x1B[32m" << "iterator - " << str << "\x1B[0m" << std::endl;
}

template <typename T, class Container>
MutantStack<T, Container>::iterator::iterator() {
    message("default constructor");
}

template <typename T, class Container>
MutantStack<T, Container>::iterator::~iterator() {
    message("default destructor");
}

template <typename T, class Container>
MutantStack<T, Container>::iterator::iterator(iterator &src) {
    message("copy constructor");
    *this = src;
}

template <typename T, class Container>
typename MutantStack<T, Container>::iterator	&MutantStack<T, Container>::iterator::operator= (iterator &src) {
    message("assingment operator");
    (void)src;
    return (*this);
}

template <typename T, class Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin(void) {
    return (c.begin());
}


// template <typename T, class Container>
// typename MutantStack<T, Container>::iterator    begin(void) {
//     return (begin());
// }

// template <typename T, class Container>
// typename MutantStack<T, Container>::iterator    end(void) {
//     return (MutantStack<T, Container>::iterator::end());
// }


#endif