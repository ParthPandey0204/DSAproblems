//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
      long long sum=0;
    long long sumOfSeries(long long n) {
       if(n==0)return sum;
       sum = sum + (n*n*n);
       sumOfSeries(n-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends