class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> next_greater;
        stack<int> st;

        // Process nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; --i) {
            int num = nums2[i];
            
            // Pop smaller elements as they cannot be the next greater element
            while (!st.empty() && st.top() <= num) {
                st.pop();
            }
            
            // If stack is empty, no greater element exists (-1)
            next_greater[num] = st.empty() ? -1 : st.top();
            
            // Push current element onto the stack
            st.push(num);
        }

        // Build the result for nums1 using the map
        vector<int> ans;
        for (int num : nums1) {
            ans.push_back(next_greater[num]);
        }

        return ans;
    }
};
