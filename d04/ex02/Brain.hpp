#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
  protected:
    std::string ideas[100];

  public:
    Brain();
    Brain(const Brain& br);
    Brain& operator = (const Brain& br);
    ~Brain();
    std::string getIdeas(int i);
    void setIdeas(int i, std::string idea);
};

#endif
