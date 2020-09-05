#include <iostream>
#include <cstdlib>
#include <cmath>
// funcion que da la sumatoria de de e^{-x} 
// necesita un input del valor de x
typedef double REAL ;

REAL Suma ( REAL x);

int main(int argc, char *argv[])
{
	std::cout.precision(15);
    std::cout.setf(std::ios::scientific);
    std::cout << Suma(std::atof(argv[1])) << "\n";
	return 0;
}

REAL Suma (REAL x)
{
	REAL term = 1.0, sum =1, eps = pow(10,-5);
	int Nmax = 100000;

	for (int i = 0; eps < std::abs(term/sum) || i < Nmax ; ++i)
	{
		term = -term*x/(i+1);
		sum = sum + term;
	}
	return sum;
}