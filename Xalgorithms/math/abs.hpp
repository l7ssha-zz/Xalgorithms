#pragma once

namespace Xalgorithms {

	template<typename T>	// Funkcja szablonowa, gdzie T moze byc dowolnym typem liczbowym
	T myAbs(T x) 
	{
		return x >= 0 ? x : -x;		// Jezeli x >= 0 zwroc x, w przeciwnym wypadku zwroc -x
	}
}