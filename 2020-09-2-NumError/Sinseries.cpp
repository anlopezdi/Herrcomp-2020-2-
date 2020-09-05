#include <iostream>
#include <cmath>
#include <cstdlib>
//programa para calcular sin x 
double exact (double x);
int factorial (int n);

int main(int argc, char *argv[])
{
	std::cout.precision(15);
    std::cout.setf(std::ios::scientific);
    double xval = std::atof(argv[1]);
    std::cout << exact (xval) << "\n";
	return 0;
}

int factorial(int n)
{
  	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

double exact (double x)
{
	double sin = 0, term = 0, eps=std::pow(10,-8);
	for (int i = 1;  eps <std::abs(term/sin) ; ++i)
	{
		term = std::pow(-1,i-1)*std::pow(x,2*i-1)/factorial(2*i-1);
		sin = sin + term;
	}
	return sin;
}

