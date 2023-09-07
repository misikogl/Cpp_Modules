#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat 
{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat const &coppy);
        Bureaucrat &operator=(Bureaucrat const &assign);
        ~Bureaucrat();

        Bureaucrat(std::string const &name, int grade); //burada "const" döndürülen değerin veya referansın değiştirilemez olduğunu belirtir
        std::string getName() const; //burada "const" bütün fonksiyonun değiştirilemez olduğunu belirtir.
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
    
        class GradeTooHighException : public std::exception 
        {
            public:
                virtual const char* what() const throw() 
                {
                    return "Grade is too high!";
                }
        };

        class GradeTooLowException : public std::exception 
        {
            public:
                virtual const char* what() const throw() 
                {
                    return "Grade is too low!";
                }
        };
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b);


#endif