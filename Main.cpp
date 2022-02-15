
#include <iostream>
#include <string>

int main(int argc, char*argv[])
{
	if (argc > 1)
		return 1;

	std::string str = "Hello CMake World";
	std::cout << str << std::endl;

	return 0;
}
