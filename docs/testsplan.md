# Module solve_quadratic

## Function `std::pair<double, double> solve_quadratic(const double, const double, const double)`

- ### Test **№1**: base
    - Target: check for correct calculations of integer rational roots
    - Type: positive
    - Input: three double values ($a, b, c$), which satisfy expression $b^2 - 4ac \geq 0$ and 
    - Expected output: two float values - roots of corresponding quadratic equation ($a^2x + bx + c = 0$)

- ### Test **№2**: advanced
    - Target: check for correct calculations of double rational roots
    - Type: positive
    - Input: three double values ($a, b, c$), which satisfy expression $b^2 - 4ac \geq 0$
    - Expected output: two float values - roots of corresponding quadratic equation ($a^2x + bx + c = 0$)

- ### Test **№3**: non-quadratic
    - Target: check for detection of non-quadratic equations
    - Type: negative
    - Input: three double values ($a, b, c$), where $a = 0$
    - Expected output: `not_quadratic` custom type exception

- ### Test **№4**: no rational roots
    - Target: check for detection of quadratic equations with no rational root(s).
    - Type: negative
    - Input: three double values ($a, b, c$), which satisfy expression $b^2 - 4ac < 0$
    - Expected output: `no_rat_roots` custom type exception