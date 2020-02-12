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
constexpr auto foreach(const T& t, Cb&& cb)
{
	return std::apply([&](auto&&... args) {(cb(args), ...);}, to_tuple(t));
}

// Still early stage and expirimental
template <Aggregate Output, Aggregate Input>
auto convert(Input&& i)
{
	// Later add a static assert so that Output and Input have the same number of argument
	return std::apply(
		[&](auto&&... args)
		{
			return Output { std::move(args)... };
		},
		to_tuple(std::move(i)));
}

template <Aggregate Output, Aggregate Input>
auto convert(const Input& i)
{
	// Later add a static assert so that Output and Input have the same number of argument
	return std::apply(
		[&](const auto&... args)
		{
			return Output { args... };
		},
		to_tuple(i));
}

}
