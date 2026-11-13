#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "stats_utils.h"
using namespace std;

TEST_CASE("Testing mean function") {
    vector<int> nums = {1, 3, 7, 9};
    CHECK(5 == mean(nums));
}

TEST_CASE("Testing median") {
    CHECK(median({1, 3, 5}) == 3.0);
    CHECK(median({1, 2, 3, 4}) == 2.5);
    CHECK(median({8, 2, 5, 1, 9}) == 5.0);
    CHECK(median({-3, -1, 0, 2}) == -0.5);
    CHECK(median({7}) == 7.0);
}

TEST_CASE("Testing mode") {
    CHECK(mode({1, 2, 2, 3}) == (vector<int>{2}));
    CHECK(mode({1, 1, 2, 2, 3}) == (vector<int>{1, 2}));
    CHECK(mode({4, 5, 6}) == (vector<int>{4, 5, 6}));
    CHECK(mode({7, 7, 7, 2, 2}) == (vector<int>{7}));
    CHECK(mode({-2, -2, 0, 1, 1}) == (vector<int>{-2, 1}));
}

