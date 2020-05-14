#pragma once
#include <vector>

using namespace std;

// Сортировка выбором
// Сравнений: O(n^2)
// Обменов: O(n)
template <typename T>
void selectionSort(vector<T> &arr) {

	size_t n = arr.size();

	// Индекс наименьшего элемента на каждом проходе
	size_t smallestIndex;

	for (size_t i = 0; i < n - 1; i++) {
		smallestIndex = i;
		for (size_t j = i + 1; j < n; j++) {
			if (arr[j] < arr[smallestIndex]) {
				smallestIndex = j;
			}
		}
		// Swap
		T t = arr[i];
		arr[i] = a[smallestIndex];
		a[smallestIndex] = t;
	}
}

// Сортировка пузырьком
// Лучшее: O(n)
// Худшее: O(n^2)
template <typename T>
void bubblenSort(vector<T>& arr) {

	size_t n = arr.size();

	// Индекс наименьшего элемента на каждом проходе
	size_t lastExchangeIndex;

	int i = n - 1;
	
	while (i > 0) {
		for (size_t j = 0; j < n - 1; j++) {
			if (arr[j + 1] < arr[j]) {
				// Swap
				T t = arr[j];
				arr[j] = a[j+1];
				a[j+1] = t;
				lastExchangeIndex = j;
			}
		}
		i = lastExchangeIndex;
	}
}

// Сортировка вставками
// Сложность: O(n^2)
// Лучшее: O(n)
// Худшее: O(n^2)
template <typename T>
void insertionSort(vector<T>& arr) {

	size_t n = arr.size();
	T t;

	size_t j;

	for (size_t i = 0; i < n; i++) {
		j = i;
		t = arr[i];
		while (j > 0 && t < arr[j - 1]) {
			arr[j] = a[j - 1];
			j--;
		}
		arr[j] = t;
	}

}