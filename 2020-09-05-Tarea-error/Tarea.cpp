#include <iostream>
#include <cmath>
//se quiere encontrar f_{x}=5-sqrt(25+x^2)
//se trata de implementar una solucion evitando el error de resta
//se encuentra la forma alternativa de la funcion f_{x}=(x^2)/(5+sqrt(25+x^2))
float Fx1(float xval);
float Fx2(float xval);

int main(void)
{
	std::cout.precision(8);
    std::cout.setf(std::ios::scientific);
    for (float i = 0; i < 1; i=i+0.01)
    {
    	std::cout << i <<"\t" << Fx1(i) << "\t" << Fx2(i) << "\n";
    }

	return 0;
}
//se implementa f_{x}=5-sqrt(25+x^2)
float Fx1(float xval)
{
	double Fun;
	Fun=5-std::pow(25+xval*xval,0.5);
	return Fun;
}
//se implementa f_{x}=(x^2)/(5+sqrt(25+x^2))
float Fx2 (float xval)
{
	double Fun;
	Fun=(-xval*xval)/(5+std::pow(25+xval*xval,0.5));
	return Fun;
}
