//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
       int n = arr.size(), i = 0;
        int min = 0, max = 0;
        while(i<n){
            if (arr[i] == i+1) {i++;}
            else {
                 if (arr[arr[i]-1] == arr[i]) {max = arr[i];
                    break;};
                   int temp = arr[arr[i]-1];
        arr[arr[i]-1] = arr[i];
        arr[i] = temp;
                
            }
        }
       int sum = 0, esum=0;
        for(int i=1;i<n+1;i++) sum += (arr[i-1]-i);
         min = max- sum;
        vector<int> res = {max,min};
    return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends