#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
}

Dog::~Dog() { }

Dog::Dog(const Dog &copy) {
	std::cout << "Copy constructor Dog - " << this << std::endl;
	type = copy.type;
}

Dog &Dog::operator=(const Dog &overload) {
	if (this == &overload)
		return *this;
	type = overload.type;
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Bow wow" << std::endl;
};