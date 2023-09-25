#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
void    MutantStack<T>::message(std::string str) {
	(void)str;
    //std::cout << "\x1B[36m" << "Mutant Stack - " << str << "\x1B[0m" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack() : stack() {
    message("default constructor");
}

template <typename T>
MutantStack<T>::~MutantStack() {
    message("default destructor");
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &src) {
    message("copy constructor");
    *this = src;
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator= (MutantStack const &src) {
    message("assingment operator");
    stack::operator=(src);
    return (*this);
}

template<typename T>
std::ostream 	&operator<<(std::ostream &o, MutantStack<T> &src) {
   o << "top of stack : " << src.top();
   return (o);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() { 
    return this->c.end();
}

#endif