#pragma once

#include "aggreget_generated.hpp"

namespace aggreget
{

template <Aggregate T>
constexpr auto to_tuple(const T& t)
{
	return details::to_tuple_impl(t);
}

template <std::size_t Index, Aggregate T>
constexpr auto get(const T& t)
{
	return std::get<Index>(to_tuple(t));
}

template <Aggregate T, typename Cb>
auto foreach(const T& t, Cb&& cb)
{
	return std::apply([&](auto&&... args) {(cb(args), ...);}, to_tuple(t));
}

}
