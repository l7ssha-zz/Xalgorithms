#pragma once

namespace Xalgorithms {

	template <typename T>
	float srednia(T *tabl) //parametry: ilosc elementów tablicy, tablica
	{
		float wynik = 0;	//incjowanie wyniku

		//dodaj wszystko do siebie 
		for (int x = 0; x <= ilosc - 1; x++)
			wynik += tabl[x];

		//return wynik / ilosc;	//zwroc sume liczb podzielona przez ich ilosc
		return wynik / (sizeof(tabl) / sizeof(p[0]));	//nie wiem czy dzia³a
		
	}

}