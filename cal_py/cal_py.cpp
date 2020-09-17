#include <iostream>
#include <cmath>
#include <random>

int main()
{
	int iterations;
	float nb_pts=0,nb_true=0;
	double x,y;
	std::uniform_real_distribution<> distribution(0.0, 1.0);
	std::default_random_engine generator{1};
	std::cin>>iterations;
	for (int i;i<iterations;i++){
		x = distribution(generator);
		y = distribution(generator);
		nb_pts=nb_pts+1;
		if (x*x+y*y <= 1){
			nb_true=nb_true+1;
		}
	}
	std::cout<<nb_true/nb_pts*4-M_PI<<std::endl;
	return 0;
}
