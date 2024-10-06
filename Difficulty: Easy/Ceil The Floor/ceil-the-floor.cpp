//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int n = arr.size(), floor_val = -1, ceil_val = INT_MAX;
        
        for(int i=0;i<n;i++) {
            if(arr[i] <= x) {
                floor_val = max(floor_val,arr[i]);
            }
            if(arr[i] >= x) {
                ceil_val = min(ceil_val,arr[i]);
            }
        }
        if(ceil_val == INT_MAX) ceil_val = -1;
        vector<int> ans(2);
        ans[0] = floor_val;
        ans[1] = ceil_val;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends