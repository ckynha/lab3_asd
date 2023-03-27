#pragma once
#include <vector>
#include <iostream>

using namespace std;

class DynamicProgrammingSolution
{
private:
    vector<vector<int>> d_; // ������� ��� ������������� ����������������
    bool calculated_; // ����, �����������, ���� �� ��� ��������� ������� d_

    const vector<int> x_; // �������� ������ �����
    const int n_; // ������ ��������� �������

public:
    DynamicProgrammingSolution(const vector<int>& x) : x_(x), n_(x.size()), calculated_(false)
    {

    }

    int calculateBest();

    int answerForSegment(int i, int j);
};