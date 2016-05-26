#pragma once

namespace Xalgorithms {

	template<typename T>
	T min(const T* array, size_t size)
	{
		// W przypadu gdy size == 0 wystapi assercja
		assert(size > 0);
		// Na poczatku wartosc minimalna rowna sie pierwszemu elementowi tablicy   
		T min = array[0];

		// Powtarzaj dla wszystkich elementow z wyjatkiem pierwszego
		for (size_t i = 1; i < size; ++i)
		{
			// Jezeli nasze aktualne min jest wieksze od elementu i
			// to przypisz mu wartosc elementu i.
			if (min > array[i])
				min = array[i];
		}

		// Zwroc wartosc minimalna       
		return min;
	}

	// Funkcja zwraca najwiekszy element tablicy typu szablonowego T
	// wskazanej przez "array" o rozmiarze "size" elementow
	// Przyjete zostalo zalozenie ze size > 0
	template<typename T>
	T max(const T* array, size_t size)
	{
		// W przypadu gdy size == 0 wystapi assercja
		assert(size > 0);
		// Na poczatku wartosc maksymalna rowna sie pierwszemu elementowi tablicy   
		T max = array[0];

		// Powtarzaj dla wszystkich elementow z wyjatkiem pierwszego
		for (size_t i = 1; i < size; ++i)
		{
			// Jezeli nasze aktualne max jest mniejsze od elementu i
			// to przypisz mu wartosc elementu i.       
			if (max < array[i])
				max = array[i];
		}

		// Zwroc wartosc maksymalna      
		return max;
	}

}