#pragma once

namespace Xalgorithms {

	template <typename T>
	void sort(T* tab)
	{
		int w = (sizeof(tab) / sizeof(tab[0]));

		// ZADEKLAROWANIE ZMIENNEJ POMOCNICZEJ NA PRZECHOWYWANIE WARTOSCI AKTUALNEJ CYFRY
		int x;
		int k;

		// PETLA PRZECHODZACA PO INDEKSACH OD 1 DO 'N' TABLICY CYFR
		for (int i = 1; i < w; i++)
		{
			x = tab[i];	// ZMIENNEJ POMOCNICZEJ PRZYPISUJEMY WARTOSC CYFRY O AKTUALNYM INDEKSIE

			// SZUKAMY MIEJSCA WSROD POPRZEDZAJACYCH AKTUALNY INDEKS CYFR W KTORYM KOLEJNA Z CYFR BEDZIE WIEKSZA OD TEJ O AKTUALNYM INDEKSIE I TUZ ZA NIA WSTAWIAMY DANA CYFRE
			for (k = i - 1; k >= 0; k--)
			{
				if (x < tab[k])
					tab[k + 1] = tab[k];
				else
					break;
			}
			tab[k + 1] = x;
		}
	}

}