#pragma once

#include <tuple>

namespace aggreget
{

namespace details
{

/*
** Concepts
*/

template <typename T>
concept Has0attr = 
	requires(T& t)
	{
		{
			T{  }
		};
	};

template <typename T>
concept Has1attr = 
Has0attr<T> &&
	requires(T& t)
	{
		{
			T{ {} }
		};
	};

template <typename T>
concept Has2attr = 
Has1attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {} }
		};
	};

template <typename T>
concept Has3attr = 
Has2attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {} }
		};
	};

template <typename T>
concept Has4attr = 
Has3attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has5attr = 
Has4attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has6attr = 
Has5attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has7attr = 
Has6attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has8attr = 
Has7attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has9attr = 
Has8attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has10attr = 
Has9attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has11attr = 
Has10attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has12attr = 
Has11attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has13attr = 
Has12attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has14attr = 
Has13attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has15attr = 
Has14attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has16attr = 
Has15attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has17attr = 
Has16attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has18attr = 
Has17attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has19attr = 
Has18attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has20attr = 
Has19attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has21attr = 
Has20attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has22attr = 
Has21attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has23attr = 
Has22attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

template <typename T>
concept Has24attr = 
Has23attr<T> &&
	requires(T& t)
	{
		{
			T{ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {} }
		};
	};

/*
** ToTupleDetails
*/

auto to_tuple_impl(Has0attr auto t)
{
	return std::tuple();
}

auto to_tuple_impl(Has1attr auto t)
{
	auto [a0] = t;
	return std::tuple(a0);
}

auto to_tuple_impl(Has2attr auto t)
{
	auto [a0, a1] = t;
	return std::tuple(a0, a1);
}

auto to_tuple_impl(Has3attr auto t)
{
	auto [a0, a1, a2] = t;
	return std::tuple(a0, a1, a2);
}

auto to_tuple_impl(Has4attr auto t)
{
	auto [a0, a1, a2, a3] = t;
	return std::tuple(a0, a1, a2, a3);
}

auto to_tuple_impl(Has5attr auto t)
{
	auto [a0, a1, a2, a3, a4] = t;
	return std::tuple(a0, a1, a2, a3, a4);
}

auto to_tuple_impl(Has6attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5);
}

auto to_tuple_impl(Has7attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6);
}

auto to_tuple_impl(Has8attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7);
}

auto to_tuple_impl(Has9attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8);
}

auto to_tuple_impl(Has10attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

auto to_tuple_impl(Has11attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

auto to_tuple_impl(Has12attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

auto to_tuple_impl(Has13attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}

auto to_tuple_impl(Has14attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}

auto to_tuple_impl(Has15attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}

auto to_tuple_impl(Has16attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}

auto to_tuple_impl(Has17attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}

auto to_tuple_impl(Has18attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
}

auto to_tuple_impl(Has19attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
}

auto to_tuple_impl(Has20attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
}

auto to_tuple_impl(Has21attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
}

auto to_tuple_impl(Has22attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
}

auto to_tuple_impl(Has23attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
}

auto to_tuple_impl(Has24attr auto t)
{
	auto [a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23] = t;
	return std::tuple(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
}


}

}
