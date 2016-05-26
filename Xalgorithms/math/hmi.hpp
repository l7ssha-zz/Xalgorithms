#pragma once

// HOW MANY INSTANCES IN ARRAY
namespace Xalgorithms {

	template <typename T>
	int ile(T rozmiar, T *tabl, T szuk)	// parametry: rozmiar tablicy, tablica, szukany elemet
	{
		int wynik = 0;	//ile znalezionych

		//poszukiwania
		for (int x = 0; x <= rozmiar - 1; x++)
			if (tabl[x] == szuk)
				wynik++;

		return wynik;
	}
}