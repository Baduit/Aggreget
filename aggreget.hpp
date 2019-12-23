#pragma once

#include "aggreget_generated.hpp"

namespace aggreget
{

template <typename T>
concept Aggregate = std::is_aggregate_v<T>;

template <Aggregate T>
auto to_tuple(const T& t)
{
	return details::to_tuple_impl(t);
}

template <std::size_t Index, typename T>
auto get(const T& t)
{
	return std::get<Index>(to_tuple(t));
}

}
