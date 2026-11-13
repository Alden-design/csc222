#include "stats_utils.h"
#include "num_vector_utils.h"

double mean(const vector<int>& nums) {
   double sum = 0.0;

   for (int num : nums) sum += num;

    return sum / nums.size();
}

double median(const vector<int>& nums) {
    vector<int> sorted = insertion_sort(nums);

    int middle = sorted.size() / 2;

    if (sorted.size() % 2 == 1) {
        return sorted[middle];
    }

    return (sorted[middle - 1] + sorted[middle]) / 2.0;

}

vector<int> mode(const vector<int>& nums) {
    return {};
}

