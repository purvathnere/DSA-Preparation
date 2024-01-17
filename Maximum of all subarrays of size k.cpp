#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> max_of_subarrays(int *arr, int n, int k) {
        vector<int> answer;
        deque<int> dq; 

        
        for (int i = 0; i < k; ++i) {
            while (!dq.empty() && arr[i] >= arr[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }

     
        for (int i = k; i < n; ++i) {
            answer.push_back(arr[dq.front()]); 
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            while (!dq.empty() && arr[i] >= arr[dq.back()]) {
                dq.pop_back();
            }

            dq.push_back(i); 
        }

        answer.push_back(arr[dq.front()]); 

        return answer;
    }
};
