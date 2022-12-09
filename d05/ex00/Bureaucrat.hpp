#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include <string>

class Bureaucrat : public std::exception
{
  private:
    const std::string _name;
    int _grade;
  public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& br);
    Bureaucrat& operator =(const Bureaucrat& br);
    ~Bureaucrat();
    std::string getName();
    int getGrade();
    void gradeUp(int grades);
    void gradeDown(int grades);
    //overwriting the what() method of exception class:
    const char* what() const throw();
};

#endif
