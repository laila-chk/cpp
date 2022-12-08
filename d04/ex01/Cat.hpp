#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  Brain* CatBrain;
  public:
    Cat();
    Cat(const Cat& cat);
    Cat& operator= (const Cat& cat);
    virtual ~Cat();
    void makeSound() const;
};

#endif
