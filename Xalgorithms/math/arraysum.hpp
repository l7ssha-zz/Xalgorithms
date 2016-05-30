#pragma once

namespace Xalgorithms {

	template <typename T>
	T arraySum(const T *array)
	{
		T sum = 0;	// Poczatkowo suma wynosi zero

		int size = (sizeof(array) / sizeof(array[0]));

		// Powtarzaj dla "size" pierwszych elementow tablicy array   
		for (size_t i = 0; i < size; ++i)
			sum += array[i];	// Dodaj do sumy wartosc i-tego elementu

		return sum;	// Zwroc sume   
	}
}