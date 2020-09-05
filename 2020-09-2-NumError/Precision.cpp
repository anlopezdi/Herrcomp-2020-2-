#include <iostream>
#include <cstdlib>
typedef double REAL;
REAL eps (int N);

int main(int arga, char *argb[])
{
	std::cout.precision(15);
    std::cout.setf(std::ios::scientific);
    eps (std::atof(argb[1]));

    return 0;

}

REAL eps( int N )
{
	REAL one = 100.0, eps = 1.0;

 for (int i = 0; i < N; ++i)
 {
 	eps = eps/2;
 	one = 10000. + eps;
 	std::cout << i << "\t" << one << "\t" << eps << "\n";
 }
 	return 0;
}