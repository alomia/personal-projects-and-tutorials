// Chapter 5 - C Functions
// Exercise 5.34 - Recursive Exponentiation

double power(double base, double exponent)
{
    if (exponent == 1)
    {
        return base;
    }
    else
    {
        return (base * power(base, exponent - 1));
    }
}
