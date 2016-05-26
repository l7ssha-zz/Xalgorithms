#pragma once

namespace Xalgorithms {

	//szukanie binarne
	template<typename T>
	int binSearch(const T& x, const T* array, size_t size)
	{
		// Zainicjalizuj zmienne pomocnicze: lewy, prawy
		int l = 0;
		int p = size - 1; 
		int s;	

		// Powtarzaj dopoki l <= p   
		while (l <= p)
		{
			s = (l + p) / 2;	// Wyznacz srodek przedzialu

			// Jezeli wartosc elementu o indeksie s jest rowna x to zwroc indeks
			if (array[s] == x)
				return s;

			// Jezeli wartosc elementu jest mniejsza, to przesun p na (srodek - 1)
			if (array[s] > x)
				p = s - 1;

			// Jezeli wartosc elementu jest wieksza to przesun l na (srodek + 1)           
			else
				l = s + 1;
		}
		return -1;	// Jezeli wartosc nie zostala znaleziona to zwroc -1   
	}

}