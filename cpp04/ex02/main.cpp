#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();
    //const Animal *meta = new Animal();

    std::cout << "type of cat: " << cat->getType() << std::endl;
    std::cout << "type of dog: " << dog->getType() << std::endl;

    cat->makeSound();
    dog->makeSound();

    delete cat;
    delete dog;
    //delete meta;
    //system("leaks animals");
}