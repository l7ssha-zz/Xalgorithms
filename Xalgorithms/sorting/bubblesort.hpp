#pragma once

#include <iostream>

namespace Xalgorithms {

	// Funkcja zamienia wartosci obiektow a i b,
	// identyczna implementacje mozna znalesc w <algorithm>
	template<typename T>
	inline void swap(T& a, T& b) {
		T c(a); a = b; b = c;	// c przechowuje tymczasowo wartosc obiektu a
	}

	// Funkcja sortuje tablice wskazana przez array o rozmiarze size,
	// ta implementacji nie jest optymalna dla posortowanych juz tablic, jej
	// zlozonosc zawsze bedzie O(N^2)
	template<typename T>
	void bubbleSort(T* array) {
		size_t size = (sizeof(array) / sizeof(array[0]));

		// Jezeli rozmiar tablicy rowny jest zero to zakoncz funkcje
		if (size == 0)
			return;
		for (size_t i = 0; i < size - 1; ++i)
			for (size_t j = size - 1; j > i; --j)
				if (array[j - 1] > array[j])
					swap(array[j - 1], array[j]);	// Zamien wartosci elementow jezeli lewy wiekszy od prawego
	}
}