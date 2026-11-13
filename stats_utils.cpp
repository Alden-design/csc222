#include "stats_utils.h"

double mean(const vector<int>& nums) {
   double sum = 0.0;

   for (int num : nums) sum += num;

    return sum / nums.size();
}

double median(const vector<int>& nums) {
    return 0.0;
}

