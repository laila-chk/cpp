#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp" 

class RobotomyRequestForm : public Form
{
    std::string _target;
  public:
    RobotomyRequestForm(); 
    RobotomyRequestForm(std::string target); 
    RobotomyRequestForm(const RobotomyRequestForm& shr); 
    RobotomyRequestForm& operator= (const RobotomyRequestForm& shr); 
    ~RobotomyRequestForm(); 

    void execute(const Bureaucrat& executor) const;
};



#endif
