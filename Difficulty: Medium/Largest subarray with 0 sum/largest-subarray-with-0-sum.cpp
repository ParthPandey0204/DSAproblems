//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
          int maxlen = 0;
          unordered_map<int,int> sumIndexMap;
          int sum=0;
          for(int i=0;i<n;i++){
              sum = sum+arr[i];
              if(sum==0){
                  maxlen =i+1;
              }
              else if(sumIndexMap.find(sum)!= sumIndexMap.end()){
              maxlen = max(maxlen , i- sumIndexMap[sum]);
              }
          else{
              sumIndexMap[sum]=i;
          }
          }
          return maxlen;
    }
    
          
          
          
    
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends