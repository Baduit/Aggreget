# Aggreget
## Description
Aggreget (aggreget get) let you usr your structures like tuple. Similar to MagicGet (https://github.com/apolukhin/magic_get) but using C++ 20 concepts.

Your structures must be an aggreget type (https://en.cppreference.com/w/cpp/language/aggreget_initialization) and all its fields must be default constructible.

Requires C++20. (because of concepts)

# TODO
- A good readme (Explanations, example, how to use the python, etc)
- Flat version
- Use feature test macro
- Add a way to detect if a structure has too many fields and make a static assertion to say that you need to generate the aggreget_generated.hpp file with more fields
- ???
- Profit
