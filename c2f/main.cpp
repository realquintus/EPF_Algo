#include <iostream>
int main ()
{
	float celsius;
	std::cout << "Entrez la température en celsius:" << std::endl;
	std::cin>>celsius;
	float far=celsius*9/5+32;
	std::cout<<"Temperature en Farenheit:"<<far<<std::endl;
}
