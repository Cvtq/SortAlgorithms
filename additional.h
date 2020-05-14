#pragma once
#include <iostream>
#include <vector>       // std::vector
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

using namespace std;
// ��������������� �������
//////////////////////////////////////////////////////////////////////////////

// ������������ ������ (� ������ �� ������������)
template <typename T>
void shuffleArray(vector<T>& a) {
    default_random_engine engine;
    engine.seed(std::chrono::system_clock::now().time_since_epoch().count());
    std::shuffle(std::begin(a), std::end(a), engine);
}

// ��������� ������ ������� �������
template <typename T>
void fillArray(vector<T>& a, size_t n) {
    for (size_t i = 0; i < n; i++) {
        a.push_back(i);
    }
}

// ����� �������
template <typename T>
void print(vector<T> const& arr)
{
    for (int i : arr) {
        cout << i << ' ';
    }
}