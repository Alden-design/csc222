#ifndef NUM_VECTOR_UTILS_H
#define NUM_VECTOR_UTILS_H

#include <string>
#include <vector>
using namespace std;

string render_num_vector(const vector<int>&);
int num_vector_sum(const vector<int>&);
int num_vector_product(const vector<int>&);
vector<int> only_evens(const vector<int>&);
vector<int> only_odds(const vector<int>&);
vector<int> nums_between(const vector<int>&, int, int);
int counts(vector<int>, int);
vector<int> insertion_sort(const vector<int>&);


#endif
