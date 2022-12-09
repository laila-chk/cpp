#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include <string>

class Bureaucrat {
  private:
    const std::string _name;
    int _grade;
  public:
    /*Canonical form reqs:*/
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat& operator= (const Bureaucrat& br);
    ~Bureaucrat();

    /*getters and setters:*/
    std::string getName();
    int getGrade();
    void gradeUp(int grades);
    void gradeDown(int grades);

    /*a Class def*/
    class Excep;

 };


class Bureaucrat::Excep : std::exception
{
 virtual const char* what() const throw ();
};



#endif
