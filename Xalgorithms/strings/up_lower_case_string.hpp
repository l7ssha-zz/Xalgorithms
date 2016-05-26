#pragma once

#include <string>
#include <cstdlib>

namespace Xalgorithms {

	std::string uplowercase(std::string str) {
		std::string result;

		//dla kolejnych liter w tekscie do przeksztalcenia:
		for (int count = 0; count< str.length(); count++)	{
			if (count % 2 == 0)
				result += toupper(str[count]);		//nieparzyste zamien na duze
			else
				result += tolower(str[count]);		//parzyste zamien na male
		}

		return result;	//zwroc string'a
	}

}
