#pragma once

#include "aggreget_generated.hpp"

namespace aggreget
{

template <typename T>
constexpr auto to_tuple(const T& t)
{
	return details::to_tuple_impl(t);
}

template <std::size_t Index, typename T>
constexpr auto get(const T& t)
{
	return std::get<Index>(to_tuple(t));
}

}
