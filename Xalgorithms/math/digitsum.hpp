#pragma once

namespace Xalgorithms {

	//funkcja obliczajaca sume cyfr liczby
	int digitsum(int liczba)
	{
		int wynik = 0;

		//xxx
		do
		{
			wynik = wynik + liczba % 10;
			liczba = liczba / 10;
		} 
		while (liczba != 0);

		return wynik;	//zwroc sume
	}

}