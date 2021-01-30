#include <cassert>
#include <string>
#include <iostream>
#include <concepts>
#include <string>
#include <vector>
#include <string_view>
#include <compare>

#include <aggreget/aggreget.hpp>

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
	assert(aggreget::get_tuple_size(s) == 3);
	assert(aggreget::get_tuple_size<Struct>() == 3);
}

bool dummy_not_error_proof_start_with_because_still_not_implemented_and_that_make_me_sad(std::string_view str, std::string_view substr)
{
	if (substr.size() > str.size())
		return false;

	for (std::size_t i = 0; i < substr.size(); ++i)
		if (str[i] != substr[i])
			return false;
	
	return true;
}

void foreach_test()
{
	std::vector<std::string> results;
	auto cb =
		[&](const auto& arg)
		{
			using T = std::decay_t<decltype(arg)>;
			if constexpr (std::same_as<T, std::string>)
				results.push_back(arg);
			else
				results.push_back(std::to_string(arg));
		};

	Struct s = {"Yolol", 42, 42.42 };
	aggreget::foreach(s, cb);

	assert(results[0] == "Yolol");
	assert(results[1] == "42");
	assert(dummy_not_error_proof_start_with_because_still_not_implemented_and_that_make_me_sad(results[2], "42.42"));
}

struct Lol
{
	std::string name;
	int id;

	bool operator==(const Lol&) const = default;
};

void modify_attr(std::string& str)
{
	str = "toast";
}

void modify_attr(int& i)
{
	i = 3;
}

void modify_aggregate()
{
	Lol base { .name = "lol", .id = 5 };
	Lol expected { .name = "toast", .id = 3 };
	aggreget::foreach(base,
		[](auto& value)
		{
			modify_attr(value);
		});
	assert(base == expected);
}

int main()
{
	basic_test();
	foreach_test();
	modify_aggregate();
}