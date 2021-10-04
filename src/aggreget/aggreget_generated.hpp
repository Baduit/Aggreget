#pragma once

#include <tuple>

#include "aggregate_concept.hpp"

namespace aggreget
{

namespace details
{

/*
** Concepts
*/

template <typename T>
concept Has0attr = 
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{  }
		};
	};

template <typename T>
concept Has1attr = 
	Has0attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {} }
		};
	};

template <typename T>
concept Has2attr = 
	Has1attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {} }
		};
	};

template <typename T>
concept Has3attr = 
	Has2attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {} }
		};
	};

template <typename T>
concept Has4attr = 
	Has3attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has5attr = 
	Has4attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has6attr = 
	Has5attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has7attr = 
	Has6attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has8attr = 
	Has7attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has9attr = 
	Has8attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has10attr = 
	Has9attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has11attr = 
	Has10attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has12attr = 
	Has11attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has13attr = 
	Has12attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has14attr = 
	Has13attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has15attr = 
	Has14attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has16attr = 
	Has15attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has17attr = 
	Has16attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has18attr = 
	Has17attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has19attr = 
	Has18attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has20attr = 
	Has19attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has21attr = 
	Has20attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has22attr = 
	Has21attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has23attr = 
	Has22attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has24attr = 
	Has23attr<T> &&
	Aggregate<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

/*
** ToTupleDetails constant ref
*/

template <Has0attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	return std::forward_as_tuple();
}

template <Has1attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0] = t;
	return std::forward_as_tuple(a0);
}

template <Has2attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1] = t;
	return std::forward_as_tuple(a0, a1);
}

template <Has3attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2] = t;
	return std::forward_as_tuple(a0, a1, a2);
}

template <Has4attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3] = t;
	return std::forward_as_tuple(a0, a1, a2, a3);
}

template <Has5attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4);
}

template <Has6attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5);
}

template <Has7attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6);
}

template <Has8attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7);
}

template <Has9attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8);
}

template <Has10attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

template <Has11attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

template <Has12attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

template <Has13attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}

template <Has14attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}

template <Has15attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}

template <Has16attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}

template <Has17attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}

template <Has18attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
}

template <Has19attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
}

template <Has20attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
}

template <Has21attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
}

template <Has22attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
}

template <Has23attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
}

template <Has24attr T>
constexpr auto to_tuple_impl_cref(const T& t)
{
	const auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
}

/*
** ToTupleDetails forwarding ref
*/

template <Has0attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	return std::forward_as_tuple();
}

template <Has1attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0));
}

template <Has2attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1));
}

template <Has3attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2));
}

template <Has4attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3));
}

template <Has5attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4));
}

template <Has6attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5));
}

template <Has7attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6));
}

template <Has8attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7));
}

template <Has9attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8));
}

template <Has10attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9));
}

template <Has11attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10));
}

template <Has12attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11));
}

template <Has13attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11), std::forward<decltype(a12)>(a12));
}

template <Has14attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11), std::forward<decltype(a12)>(a12), std::forward<decltype(a13)>(a13));
}

template <Has15attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11), std::forward<decltype(a12)>(a12), std::forward<decltype(a13)>(a13), std::forward<decltype(a14)>(a14));
}

template <Has16attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11), std::forward<decltype(a12)>(a12), std::forward<decltype(a13)>(a13), std::forward<decltype(a14)>(a14), std::forward<decltype(a15)>(a15));
}

template <Has17attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11), std::forward<decltype(a12)>(a12), std::forward<decltype(a13)>(a13), std::forward<decltype(a14)>(a14), std::forward<decltype(a15)>(a15), std::forward<decltype(a16)>(a16));
}

template <Has18attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11), std::forward<decltype(a12)>(a12), std::forward<decltype(a13)>(a13), std::forward<decltype(a14)>(a14), std::forward<decltype(a15)>(a15), std::forward<decltype(a16)>(a16), std::forward<decltype(a17)>(a17));
}

template <Has19attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11), std::forward<decltype(a12)>(a12), std::forward<decltype(a13)>(a13), std::forward<decltype(a14)>(a14), std::forward<decltype(a15)>(a15), std::forward<decltype(a16)>(a16), std::forward<decltype(a17)>(a17), std::forward<decltype(a18)>(a18));
}

template <Has20attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11), std::forward<decltype(a12)>(a12), std::forward<decltype(a13)>(a13), std::forward<decltype(a14)>(a14), std::forward<decltype(a15)>(a15), std::forward<decltype(a16)>(a16), std::forward<decltype(a17)>(a17), std::forward<decltype(a18)>(a18), std::forward<decltype(a19)>(a19));
}

template <Has21attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11), std::forward<decltype(a12)>(a12), std::forward<decltype(a13)>(a13), std::forward<decltype(a14)>(a14), std::forward<decltype(a15)>(a15), std::forward<decltype(a16)>(a16), std::forward<decltype(a17)>(a17), std::forward<decltype(a18)>(a18), std::forward<decltype(a19)>(a19), std::forward<decltype(a20)>(a20));
}

template <Has22attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11), std::forward<decltype(a12)>(a12), std::forward<decltype(a13)>(a13), std::forward<decltype(a14)>(a14), std::forward<decltype(a15)>(a15), std::forward<decltype(a16)>(a16), std::forward<decltype(a17)>(a17), std::forward<decltype(a18)>(a18), std::forward<decltype(a19)>(a19), std::forward<decltype(a20)>(a20), std::forward<decltype(a21)>(a21));
}

template <Has23attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11), std::forward<decltype(a12)>(a12), std::forward<decltype(a13)>(a13), std::forward<decltype(a14)>(a14), std::forward<decltype(a15)>(a15), std::forward<decltype(a16)>(a16), std::forward<decltype(a17)>(a17), std::forward<decltype(a18)>(a18), std::forward<decltype(a19)>(a19), std::forward<decltype(a20)>(a20), std::forward<decltype(a21)>(a21), std::forward<decltype(a22)>(a22));
}

template <Has24attr T>
constexpr auto to_tuple_impl_fref(T&& t)
{
	auto&& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23] = t;
	return std::forward_as_tuple(std::forward<decltype(a0)>(a0), std::forward<decltype(a1)>(a1), std::forward<decltype(a2)>(a2), std::forward<decltype(a3)>(a3), std::forward<decltype(a4)>(a4), std::forward<decltype(a5)>(a5), std::forward<decltype(a6)>(a6), std::forward<decltype(a7)>(a7), std::forward<decltype(a8)>(a8), std::forward<decltype(a9)>(a9), std::forward<decltype(a10)>(a10), std::forward<decltype(a11)>(a11), std::forward<decltype(a12)>(a12), std::forward<decltype(a13)>(a13), std::forward<decltype(a14)>(a14), std::forward<decltype(a15)>(a15), std::forward<decltype(a16)>(a16), std::forward<decltype(a17)>(a17), std::forward<decltype(a18)>(a18), std::forward<decltype(a19)>(a19), std::forward<decltype(a20)>(a20), std::forward<decltype(a21)>(a21), std::forward<decltype(a22)>(a22), std::forward<decltype(a23)>(a23));
}

/*
** ToTupleDetails ref
*/

template <Has0attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	return std::forward_as_tuple();
}

template <Has1attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0] = t;
	return std::forward_as_tuple(a0);
}

template <Has2attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1] = t;
	return std::forward_as_tuple(a0, a1);
}

template <Has3attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2] = t;
	return std::forward_as_tuple(a0, a1, a2);
}

template <Has4attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3] = t;
	return std::forward_as_tuple(a0, a1, a2, a3);
}

template <Has5attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4);
}

template <Has6attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5);
}

template <Has7attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6);
}

template <Has8attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7);
}

template <Has9attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8);
}

template <Has10attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

template <Has11attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

template <Has12attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

template <Has13attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}

template <Has14attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}

template <Has15attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}

template <Has16attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}

template <Has17attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}

template <Has18attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
}

template <Has19attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
}

template <Has20attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
}

template <Has21attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
}

template <Has22attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
}

template <Has23attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
}

template <Has24attr T>
constexpr auto to_tuple_impl_ref(T& t)
{
	auto& [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23] = t;
	return std::forward_as_tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
}

/*
** GetTupleSizeDetails
*/

template <Has0attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 0;
}

template <Has1attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 1;
}

template <Has2attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 2;
}

template <Has3attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 3;
}

template <Has4attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 4;
}

template <Has5attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 5;
}

template <Has6attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 6;
}

template <Has7attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 7;
}

template <Has8attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 8;
}

template <Has9attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 9;
}

template <Has10attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 10;
}

template <Has11attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 11;
}

template <Has12attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 12;
}

template <Has13attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 13;
}

template <Has14attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 14;
}

template <Has15attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 15;
}

template <Has16attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 16;
}

template <Has17attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 17;
}

template <Has18attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 18;
}

template <Has19attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 19;
}

template <Has20attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 20;
}

template <Has21attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 21;
}

template <Has22attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 22;
}

template <Has23attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 23;
}

template <Has24attr T>
constexpr std::size_t get_tuple_size_impl()
{
	return 24;
}


}

}
