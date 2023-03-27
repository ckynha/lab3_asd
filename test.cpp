#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <vector>
#include "catch.hpp"
#include "second_part.h"

TEST_CASE("Second part")
{
    vector<int> x = { 1, 2, 3, 4, 5 };
    DynamicProgrammingSolution solution(x);
    cout << "Maximum number with + and * signs: " << solution.calculateBest() << endl;
    cout << "Answer for segment [1, 3]: " << solution.answerForSegment(1, 3) << endl;

	REQUIRE(solution.calculateBest() == 180);
    REQUIRE(solution.answerForSegment(1, 3) == 24);
}


