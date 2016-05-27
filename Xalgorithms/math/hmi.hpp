#pragma once

// HOW MANY INSTANCES IN ARRAY
namespace Xalgorithms {

	template <typename T>
	int ile(T *tabl, T szuk)	// parametry: tablica, szukany elemet
	{
		int wynik = 0;	//ile znalezionych

		size_t rozmiar = (sizeof(tabl) / sizeof(tabl[0]));

		//poszukiwania
		for (int x = 0; x <= rozmiar - 1; x++)
			if (tabl[x] == szuk)
				wynik++;

		return wynik;
	}
}