#ifndef SOLVE_QUADRATIC
#define SOLVE_QUADRATIC

#include <exception>
#include <string>
#include <cmath>

class no_rat_roots : public std::exception 
{
    public:
        std::string what()
        {
            return "No rational roots of equation.";
        }
};

class not_quadratic : public std::exception 
{
    public:
        std::string what() 
        {
            return "Missing square term.";
        }
};

std::pair<double, double> solve_quadratic(const double a, const double b, const double c)
{
    if(a == 0)
        throw not_quadratic();

    double discriminant = pow(b, 2) - 4 * a * c;

    if(discriminant < 0)
        throw no_rat_roots();
    
    if(discriminant == 0)
    {
        double result = -b / (2 * a);
        return(std::make_pair(result, result));
    }
    
    return(std::make_pair((-b - sqrt(discriminant)) / (2 * a), (-b + sqrt(discriminant)) / (2 * a)));
}

#endif