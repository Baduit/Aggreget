#include <cassert>
#include <string>
#include <iostream>

#include "aggreget/aggreget.hpp"

struct Struct
{
	std::string str;
	int a;
	double trololol;
};

void basic_test()
{
	Struct s = {"Yolol", 42, 42.42};
	assert(aggreget::get<0>(s) == "Yolol");
	assert(aggreget::get<1>(s) == 42);
	assert(aggreget::get<2>(s) == 42.42);
}

int main()
{
	basic_test();
}