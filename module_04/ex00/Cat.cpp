#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
}

Cat::~Cat() { }

Cat::Cat(const Cat &copy) {
	std::cout << "Copy constructor Cat - " << this << std::endl;
	type = copy.type;
}

Cat &Cat::operator=(const Cat &overload) {
	if (this == &overload)
		return *this;
	type = overload.type;
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Meow meow" << std::endl;
};
