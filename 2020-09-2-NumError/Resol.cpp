#include <iostream>
#include <cstdlib>
int main()
{
	std::cout.precision(7);
	std::cout.self(std::ios::scientific);
	float under = 1.0;
	float over = 1.0;
	int N=1000;
	for(int ii=0;ii<N;ii++)
	{
		under /= 2.0;
		over *= 2.0;
		std::cout << ii << "\t" << under << "\t"<< over << "\n;" ;
	}
	return 0;
}