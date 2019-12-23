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

	std::cout << "To tuple then std::get" << std::endl;
	auto my_struct_as_tuple = aggreget::to_tuple(my_awesome_struct);
	std::cout << "The string is: " << std::get<0>(my_struct_as_tuple) << std::endl;
	std::cout << "The int is: " << std::get<1>(my_struct_as_tuple) << std::endl;
	std::cout << "The double is: " << std::get<2>(my_struct_as_tuple) << std::endl;

	std::cout << "Aggreget (The same as above but in one function)" << std::endl;
	std::cout << "The string is: " << aggreget::get<0>(my_awesome_struct) << std::endl;
	std::cout << "The int is: " << aggreget::get<1>(my_awesome_struct) << std::endl;
	std::cout << "The double is: " << aggreget::get<2>(my_awesome_struct) << std::endl;
}