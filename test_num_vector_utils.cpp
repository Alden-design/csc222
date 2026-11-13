#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;

TEST_CASE("Testing render_num_vector") {
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);

    CHECK(render_num_vector({2, 4, 6}) == "2 4 6");
    CHECK(render_num_vector({}) == "");
    CHECK(render_num_vector({1, 3, 5}) == "1 3 5");
}

TEST_CASE("Testing num_vector_sum") {
    vector<int> nums = {1, 3, 7};
    CHECK(num_vector_sum(nums) == 11);

    CHECK(num_vector_sum({}) == 0);
    CHECK(num_vector_sum({3, 7, 12}) == 22);
    CHECK(num_vector_sum({-2, -1, 0, -1}) == -4);

}

TEST_CASE("Testing num_vector_product") {
    vector<int> nums = {1, 3, 7};
    CHECK(num_vector_product(nums) == 21);

    CHECK(num_vector_product({3, 7, 12}) == 252);
    CHECK(num_vector_product({-2, -1, -1}) == -2);
}

TEST_CASE("Testing only_evens") {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    vector<int> evens = only_evens(nums);
    string expected = "2 4 6 8 12 14 22";
    CHECK(render_num_vector(evens) == expected);
}

