#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
  Brain* DogBrain;
  public:
    Dog();
    Dog(const Dog& dog);
    Dog& operator= (const Dog& dog);
    virtual ~Dog();
    void makeSound()const;
};

#endif
