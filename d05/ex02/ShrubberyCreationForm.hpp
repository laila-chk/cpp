#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP 

#include "Form.hpp"
#include "Bureaucrat.hpp" 

class ShrubberyCreationForm : public Form
{
    std::string _target;
  public:
    ShrubberyCreationForm(); 
    ShrubberyCreationForm(std::string target); 
    ShrubberyCreationForm(const ShrubberyCreationForm& shr); 
    ShrubberyCreationForm& operator= (const ShrubberyCreationForm& shr); 
    ~ShrubberyCreationForm(); 

    void execute(const Bureaucrat& executor) const;
};



#endif
