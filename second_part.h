#pragma once
#include <vector>
#include <iostream>

using namespace std;

class DynamicProgrammingSolution
{
private:
    vector<vector<int>> d_; // матрица для динамического программирования
    bool calculated_; // флаг, указывающий, была ли уже вычислена матрица d_

    const vector<int> x_; // исходный вектор чисел
    const int n_; // размер исходного вектора

public:
    DynamicProgrammingSolution(const vector<int>& x) : x_(x), n_(x.size()), calculated_(false)
    {

    }

    int calculateBest();

    int answerForSegment(int i, int j);
};