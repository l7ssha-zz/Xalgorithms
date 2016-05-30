#pragma once

template <typename T>
void selectionsort(T tablica)
{
	int ile_liczb = (sizeof(tab) / sizeof(tab[0]));	//obliczanie ilosci elementow w talblicy 

	//tymaczasowe zmienne
	int min;
	int i;
	int j;
	int temp;

	for (i = 0; i<ile_liczb - 1; i++)
	{
		min = i;
		for (j = i + 1; j<ile_liczb; j++)
			if (tablica[j]<tablica[min]) min = j;

		temp = tablica[min];
		tablica[min] = tablica[i];
		tablica[i] = temp;
	}