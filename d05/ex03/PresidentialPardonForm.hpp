#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP 

#include "Form.hpp"
#include "Bureaucrat.hpp" 

class PresidentialPardonForm : public Form
{
    std::string _target;
  public:
    PresidentialPardonForm(); 
    PresidentialPardonForm(std::string target); 
    PresidentialPardonForm(const PresidentialPardonForm& shr); 
    PresidentialPardonForm& operator= (const PresidentialPardonForm& shr); 
    ~PresidentialPardonForm(); 

        void execute(const Bureaucrat& executor) const;
};



#endif
