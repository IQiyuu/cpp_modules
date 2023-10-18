#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();

    std::cout << "type of animal: " << meta->getType() << std::endl;
    std::cout << "type of cat: " << cat->getType() << std::endl;
    std::cout << "type of dog: " << dog->getType() << std::endl;

    meta->makeSound();
    cat->makeSound();
    dog->makeSound();

    const WrongAnimal *wmeta = new WrongAnimal();
    const WrongAnimal *wcat = new WrongCat();

    std::cout << "type of animal: " << wmeta->getType() << std::endl;
    std::cout << "type of cat: " << wcat->getType() << std::endl;

    wmeta->makeSound();
    wcat->makeSound();

    delete meta;
    delete cat;
    delete dog;
    delete wmeta;
    delete wcat;
}