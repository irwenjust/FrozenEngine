#pragma once

#include <string>

namespace Frozen
{
	class GameObject
	{
	public:
		__declspec(noinline) const std::string& GetName() const
		{
			return m_Name;
		}

	protected:
		std::string m_Name = "unnamed";
	};
}
