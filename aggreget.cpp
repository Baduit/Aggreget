#include <iostream>
#include <concepts>
#include <type_traits>
#include <ranges>
#include <tuple>

template <typename T>
auto StructBinding(const T& t)
{
    auto [a, b] = t;
    return std::tuple(a, b);
}

template <typename T>
auto StructBinding3(const T& t)
{
    auto [a, b, c] = t;
    return std::tuple(a, b, c);
}

template <typename T>
concept MyTest =  requires(T& t) {
      { T{{}, {}} }; };

template <typename T>
concept MyTest3 =
    MyTest<T> &&
    requires(T& t)
    {
        {
            T{ {}, {}, {} }
        };
    };

struct MyStruct
{
    int a;
    int b;
};

struct MyStruct3
{
    int a;
    int b;
    std::string c;
};

void my_print(MyTest auto t)
{
    std::cout << "2" << std::endl;
}

void my_print(MyTest3 auto t)
{
    std::cout << "3" << std::endl;
}

void test()
{
    {
        MyStruct my_struct = {0, 1};
        auto [a, b] = my_struct;
        StructBinding(my_struct);
        //StructBinding3(my_struct);
        MyTest auto c = my_struct;
        my_print(c);
    }

    {
        MyStruct3 my_struct3 = {0, 1, "2"};
        auto [a, b, c] = my_struct3;
        //StructBinding(my_struct3);
        StructBinding3(my_struct3);
        MyTest3 auto conc = my_struct3;
        my_print(conc);
    }
}

int main()
{
    test();
}
