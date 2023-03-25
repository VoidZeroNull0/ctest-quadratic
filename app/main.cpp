#include <iostream>
#include <limits>
#include "solve_quadratic.hpp"

int main()
{
    double a;
    double b;
    double c;

    bool bad_io_f = false;
    do
    {
        std::cin >> a >> b >> c;

        bad_io_f = false;
        if(std::cin.fail())
        {
            bad_io_f = true;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Not a valid input of a, b, c. Try again.\n";
        }
    }
    while(bad_io_f);

    try
    {
        std::pair<double, double> result = solve_quadratic(a, b, c);
        std::cout << result.first << ' ' << result.second;
    }
    catch(no_rat_roots& exc) 
    {
        std::cout << exc.what();
        
        return 1;
    }
    
    return 0;
}