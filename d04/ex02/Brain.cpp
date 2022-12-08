#include "Brain.hpp"

Brain::Brain()
{
  std::cout << "default Constructor for Brain was called" << std::endl;
}


Brain::Brain(const Brain& br)
{
  for (int i = 0; i < 100; i++)
    this->ideas[i] = br.ideas[i];
  std::cout << "Copy Constructor of Brain was called" << std::endl;
}


Brain& Brain::operator = (const Brain& br)
{
  std::cout << "Brain assignement operator was called" << std::endl;
  for (int i = 0; i < 100; i++)
    this->ideas[i] = br.ideas[i];
  return (*this);
}


Brain::~Brain()
{
  std::cout << "default Destructor for Brain was called" << std::endl;
}

std::string Brain::getIdeas(int i)
{
  return (ideas[i]);
}

void Brain::setIdeas(int i, std::string idea)
{
  ideas[i] = idea;
}
