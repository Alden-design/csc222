#include "num_vector_utils.h"

string render_num_vector(const vector<int>& nums) {
    string s = "";
    
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0)  s += " ";

        s += to_string(nums[i]);
    }

    return s;
}

int num_vector_sum(const vector<int>& nums) {
    int sum = 0;

    for (int num : nums) sum += num;

    return sum;
}

int num_vector_product(const vector<int>& nums) {
    int product = 1;

    for (int num : nums) product *= num;

    return product;
}

vector<int> only_evens(const vector<int>& nums) {
    vector<int> evens;

    for (int num : nums) {
        if (num % 2 == 0) evens.push_back(num);
    }

    return evens;
}

vector<int> only_odds(const vector<int>& nums) {
    vector<int> odds;

    for (int num : nums) {
        if (num % 2 != 0) odds.push_back(num);
    }

    return odds;
}

vector<int> nums_between(const vector<int>& nums, int low, int high) {
    vector<int> result;
    
    for (int num : nums) {
        if (num >= low && num <= high) result.push_back(num);
    }
    
    return result;
}

int counts(vector<int> nums, int value) {
    int count = 0;
    
    for (int num : nums) {
        if (num == value) count++;
    }
    
    return count;
}

vector<int> insertion_sort(const vector<int>& nums) {
    return {};
}

