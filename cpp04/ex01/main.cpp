#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* cat = new Cat();
    const Animal* dog = new Dog();

    std::cout << "type of cat: " << cat->getType() << std::endl;
    std::cout << "type of dog: " << dog->getType() << std::endl;

    cat->makeSound();
    dog->makeSound();

    delete cat;
    delete dog;

    Cat *cat2 = new Cat();
    Dog *dog2 = new Dog();
    Cat *copycat = new Cat();
    Dog *copydog = new Dog();

    std::cout << "cat2 idea: " << cat2->getBrain()->getIdeas()[0] << std::endl;
    std::cout << "dog2 idea: " << dog2->getBrain()->getIdeas()[0] << std::endl;
    std::cout << "copycat idea: " << copycat->getBrain()->getIdeas()[0] << std::endl;
    std::cout << "copydog idea: " << copydog->getBrain()->getIdeas()[0] << std::endl;

    copycat = cat2;
    copydog = dog2;

    delete copydog;
    delete copycat;

    const Animal	*(array[6]);
    for (int i = 0; i < 3; i++)
        array[i] = new Cat();
    for (int i = 3; i < 6; i++)
        array[i] = new Dog();
    for (int i = 0; i < 6; i++)
		delete array[i];
    //system("leaks animals");
}