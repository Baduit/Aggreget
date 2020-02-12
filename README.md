# Aggreget
## Description
Aggreget (aggreget get) let you use your structures like tuples. Similar to [MagicGet](https://github.com/apolukhin/magic_get) but using C++ 20 concepts.

Your structure must be an [aggregate](https://en.cppreference.com/w/cpp/language/aggreget_initialization)  type and all its fields must be [default constructible](https://en.cppreference.com/w/cpp/types/is_default_constructible).

Requires C++20. (because of concepts)

Tested with gcc 10 20191220 (experimental).

You can try it online on: https://godbolt.org/z/sW7zA8.

## Examples
Imagine you have the following structure:
```C++
struct AwesomeStruct
{
	std::string str;
	int a;
	double trololol;
};

AwesomeStruct my_awesome_struct = {"Yolol", 42, 42.42};
```
You can transform it into a tuple and use your tuple:
```Cpp
std::cout << "To tuple then std::get" << std::endl;
auto my_struct_as_tuple = aggreget::to_tuple(my_awesome_struct);
std::cout << "The string is: " << std::get<0>(my_struct_as_tuple) << std::endl;
std::cout << "The int is: " << std::get<1>(my_struct_as_tuple) << std::endl;
std::cout << "The double is: " << std::get<2>(my_struct_as_tuple) << std::endl;
```

You can even get directly a a field with __aggreget::get__:
```Cpp
std::cout << "Aggreget (The same as above but in one function)" << std::endl;
std::cout << "The string is: " << aggreget::get<0>(my_awesome_struct) << std::endl;
std::cout << "The int is: " << aggreget::get<1>(my_awesome_struct) << std::endl;
std::cout << "The double is: " << aggreget::get<2>(my_awesome_struct) << std::endl;
```

The whole example is in the file __example.cpp__.

## How to add it into my project?
Just add the files __aggreget.hpp__, __aggregate_concept.hpp__ and __aggreget_generated.hpp__ into your project include path.

## How does it work?
There is a concept for each number of attributes a structure can have (default is 0 to 24). To declare these concepts I use aggregate initialization: if I can initialize a structure like this `MyStruct { {}, {}}` this mean that the structure has atleast 2 fields.
Then I use the fact that concept are use in overload resolution, so there is an overload of _to_tuple_ function for each concept. To transform the structure into a tuple I use [structure binding](https://en.cppreference.com/w/cpp/language/structured_binding).

## TODO
- A Better (and updated) readme (Explanations, example, how to use the python, etc)
- Implement stuff with "tuple_size"
- Better unit tests
- Use feature test macro
- Add a way to detect if a structure has too many fields and make a static assertion to say that you need to generate the aggreget_generated.hpp file with more fields
- Port it on vcpkg ?
- ???
- Profit
