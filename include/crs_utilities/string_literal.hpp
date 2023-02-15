#pragma once

#include "std_type.hpp"

namespace CRSLib
{
	template<class CharT, size_t n>
	struct StringLiteral final
	{
		CharT value[n]{};
		
		constexpr StringLiteral(const CharT (&str)[n])
		{
			for(size_t i = 0; i < n; ++i)
			{
				value[i] = str[i];
			}
		}
	};
}