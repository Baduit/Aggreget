#include <iostream>
#include <utility>
#include <string>

#include "aggreget.hpp"

struct AwesomeStruct
{
	std::string str;
	int a;
	double trololol;
};

int main()
{
	std::cout << "Hello, World!" << std::endl;

	AwesomeStruct my_awesome_struct = {"Yolol", 42, 42.42};
	auto my_struct_as_tuple = aggregate::to_tuple(my_awesome_struct);

	std::cout << "The string is: " << std::get<0>(my_struct_as_tuple) << std::endl;
	std::cout << "The int is: " << std::get<1>(my_struct_as_tuple) << std::endl;
	std::cout << "The double is: " << std::get<2>(my_struct_as_tuple) << std::endl;
}