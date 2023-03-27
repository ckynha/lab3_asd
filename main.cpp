#include <iostream>
#include <vector>
#include "second_part.h"

using namespace std;

template <typename T>
vector<T> maxNonStrictIncreasingSubseq(const vector<T>& seq) 
{
    int n = seq.size(); // ���������� ������ ������������������
    vector<int> dp(n, 1); // ������ ����� ����. ���������-��, ��������������� �� i-� �������� ������������������
    vector<int> prev(n, -1); // �������� ������ ����������� �������� � ������������������ ��� ������� i-�� ��������, ����� ������������ ���������������������

    for (int i = 1; i < n; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            if (seq[j] <= seq[i] && dp[j] + 1 > dp[i]) 
            {
                dp[i] = dp[j] + 1;
                prev[i] = j;
            }
        }
    }

    int maxIdx = max_element(dp.begin(), dp.end()) - dp.begin(); // ������� ����. �������
    vector<T> subseq(dp[maxIdx]); // ����� ��������� ������� �������� ������������ ���������������������
    for (int i = maxIdx; i >= 0; i = prev[i]) 
    {
        subseq[--dp[maxIdx]] = seq[i];
    }

    return subseq;
}

int main()
{
    // 1 �����
    vector<int> seq = { 1, 3, 2, 4, 5, 2, 2, 6, 7 };
    vector<int> subseq = maxNonStrictIncreasingSubseq(seq);
    
    //vector<string> seq = { "abc", "def", "aaa", "bcd", "cde", "aaa", "fgh", "ijk" };
    //vector<string> subseq = maxNonStrictIncreasingSubseq(seq);
    
    cout << "Input sequence: ";
    for (auto x : seq) 
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "Max non-strict increasing subsequence: ";
    for (auto x : subseq) 
    {
        cout << x << " ";
    }
    cout << endl;

    // 2 ����� 

    vector<int> x = { 1, 2, 3, 4, 5 };
    DynamicProgrammingSolution solution(x);
    cout << "Maximum number with + and * signs: " << solution.calculateBest() << endl;
    cout << "Answer for segment [1, 3]: " << solution.answerForSegment(1, 3) << endl;

    return 0;
}
