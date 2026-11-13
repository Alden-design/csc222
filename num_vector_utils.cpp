#include "num_vector_utils.h"

string render_num_vector(const vector<int>& nums) {
    string s = "";
    
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0)  s += " ";

        s += to_string(nums[i]);
    }

    return s;
}

int num_vector_sum(const vector<int>&) {
    return 0;
}
