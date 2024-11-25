#include<iostream>
#include<windowsx.h>

int main(void) {

	 double x = 2.5786786786;

	 std::cout << x<<std::endl;

	 std::cout.precision(4);
	std::cout << x << std::endl;

	std::cout.flags(std::cout.fixed);
	std::cout << x << std::endl;





	system("pause");
	return 0;

}