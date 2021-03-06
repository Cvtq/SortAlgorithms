#pragma once
#include <vector>

using namespace std;

// ���������� �������
// ���������: O(n^2)
// �������: O(n)
template <typename T>
void selectionSort(vector<T> &arr) {

	size_t n = arr.size();

	// ������ ����������� �������� �� ������ �������
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
		arr[i] = arr[smallestIndex];
		arr[smallestIndex] = t;
	}
}

// ���������� ���������
// ������: O(n)
// ������: O(n^2)
template <typename T>
void bubblenSort(vector<T>& arr) {

	size_t n = arr.size();

	// ������ ����������� �������� �� ������ �������
	size_t lastExchangeIndex;

	int i = n - 1;
	
	while (i > 0) {
		for (size_t j = 0; j < n - 1; j++) {
			if (arr[j + 1] < arr[j]) {
				// Swap
				T t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
				lastExchangeIndex = j;
			}
		}
		i = lastExchangeIndex;
	}
}

// ���������� ���������
// ���������: O(n^2)
// ������: O(n)
// ������: O(n^2)
template <typename T>
void insertionSort(vector<T>& arr) {

	size_t n = arr.size();
	T t;

	size_t j;

	for (size_t i = 0; i < n; i++) {
		j = i;
		t = arr[i];
		while (j > 0 && t < arr[j - 1]) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = t;
	}

}

// ���������� �����
// ������: O(n (log(n))^2)
// ������: O(n^2)
template <typename T>
void shellSort(vector<T>& arr)
{
	size_t n = arr.size();
	for (int gap = n / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < n; i += 1) {
			int temp = arr[i];
			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = temp;
		}
	}
}