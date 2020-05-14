#pragma once
#include <vector>

// Быстрая сортировка
// Сложность: O(n log2(n))
// Худшее: O(n^2)

using namespace std;

template <typename T> 
size_t MedianOfThree(T& a, T& b, T& c, size_t ai, size_t bi, size_t ci)
{
	if (a >= b && a <= c)
		return ai;
	if (b >= a && b <= c)
		return bi;
	return ci;
}

template <typename T> 
size_t QuicksortPartition(vector<T>& A, size_t low, size_t high)
{
	size_t ci = (int)(0.5 * (low + high) + 0.5);
	size_t pivotIndex = MedianOfThree(A[low], A[ci], A[high], low, ci, high);
	T pivot = A[pivotIndex];

	size_t i = low;
	size_t j = high;
	while (true)
	{
		while (A[i] <= pivot && i < pivotIndex) i++;
		while (A[j] >= pivot && j > pivotIndex) j--;
		if (i == pivotIndex && j == pivotIndex)
			return pivotIndex;

		T tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;

		if (i == pivotIndex)
			pivotIndex = j;
		else if (j == pivotIndex)
			pivotIndex = i;
	}
}

template <typename T>
void Quicksort(vector<T>& A, size_t low, size_t high)
{
	if (low < high)
	{
		size_t p = QuicksortPartition<T>(A, low, high);
		if (p > 0) 
			Quicksort<T>(A, low, p - 1);
		Quicksort<T>(A, p + 1, high);
	}
}

template <typename T> 
void Quicksort(vector<T>& A)
{
	if (A.size() <= 1)
		return; // Ничего не делаем
	Quicksort(A, 0, A.size() - 1);
}