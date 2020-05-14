#pragma once
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include <iostream>
#include <vector>
#include <time.h>
#include "additional.h"
#include "quickSort.h"
#include "SortAlgorithms.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const size_t n = 10;

	//////////////////////////////////////////////////////////////
	{
		vector<int>	a;
		fillArray(a, n);
		shuffleArray(a);

		cout << "Массив: ";
		print(a);
		cout << endl;		

		auto t_start = std::chrono::high_resolution_clock::now();
		bubblenSort(a);
		auto t_end = std::chrono::high_resolution_clock::now();
		size_t time = std::chrono::duration_cast<chrono::nanoseconds>(t_end - t_start).count();

		cout << "Отсортированный массив: ";
		print(a);
		cout << endl;

		cout << "Сортировка пузырьком: " << " Время: " << time << " наносекунд" << endl;
		cout << endl;
	}

	//////////////////////////////////////////////////////////////
	{
		vector<int>	a;
		fillArray(a, n);
		shuffleArray(a);

		cout << "Массив: ";
		print(a);
		cout << endl;

		auto t_start = std::chrono::high_resolution_clock::now();
		selectionSort(a);
		auto t_end = std::chrono::high_resolution_clock::now();
		size_t time = std::chrono::duration_cast<chrono::nanoseconds>(t_end - t_start).count();

		cout << "Отсортированный массив: ";
		print(a);
		cout << endl;

		cout << "Сортировка выбором: " << " Время: " << time << " наносекунд" << endl;
		cout << endl;
	}

	//////////////////////////////////////////////////////////////
	{
		vector<int>	a;
		fillArray(a, n);
		shuffleArray(a);

		cout << "Массив: ";
		print(a);
		cout << endl;

		auto t_start = std::chrono::high_resolution_clock::now();
		insertionSort(a);
		auto t_end = std::chrono::high_resolution_clock::now();
		size_t time = std::chrono::duration_cast<chrono::nanoseconds>(t_end - t_start).count();

		cout << "Отсортированный массив: ";
		print(a);
		cout << endl;

		cout << "Сортировка вставками: " << " Время: " << time << " наносекунд" << endl;
		cout << endl;
	}

	//////////////////////////////////////////////////////////////
	{
		vector<int>	a;
		fillArray(a, n);
		shuffleArray(a);

		cout << "Массив: ";
		print(a);
		cout << endl;

		auto t_start = std::chrono::high_resolution_clock::now();
		shellSort(a);
		auto t_end = std::chrono::high_resolution_clock::now();
		size_t time = std::chrono::duration_cast<chrono::nanoseconds>(t_end - t_start).count();

		cout << "Отсортированный массив: ";
		print(a);
		cout << endl;

		cout << "Сортировка шелла: " << " Время: " << time << " наносекунд" << endl;
		cout << endl;
	}
	//////////////////////////////////////////////////////////////
	{
		vector<int>	a;
		fillArray(a, n);
		shuffleArray(a);

		cout << "Массив: ";
		print(a);
		cout << endl;

		auto t_start = std::chrono::high_resolution_clock::now();
		Quicksort(a);
		auto t_end = std::chrono::high_resolution_clock::now();
		size_t time = std::chrono::duration_cast<chrono::nanoseconds>(t_end - t_start).count();

		cout << "Отсортированный массив: ";
		print(a);
		cout << endl;

		cout << "Быстрая сортировка: " << " Время: " << time << " наносекунд" << endl;
		cout << endl;
	}
}
