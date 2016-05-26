#pragma once

namespace Xalgorithms {

	//szukanie elementu z wartrownikiem 
	template<typename T>
	int gsearch(const T& x, T* array, size_t size)
	{
		size_t i = 0;		// Aktualny indeks w tablicy wskazuje na pierwszy element
		array[size] = x;	// Inicjalizacja wartownika

		// Powtarzaj dopoki element i jest rozny od x
		while (array[i] != x)
			++i;

		return i < size ? i : -1;	// Zwroc indeks i gdy jest mniejszy od size, w przeciwnym wypadku -1
	}
}
