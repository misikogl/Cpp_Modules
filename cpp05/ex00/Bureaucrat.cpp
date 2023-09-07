#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade)
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &assign)
{
    if (this != &assign)
        grade = assign.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string const &name_, int grade_) : name(name_), grade(grade_)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();  
}

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw GradeTooLowException();
    grade++;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b) 
{
    out << b.getName() << ", bureaucrat grade: " << b.getGrade();
    return out;
}