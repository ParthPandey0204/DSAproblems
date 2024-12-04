//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution
{
  public:
    long long int countSubstr(string s, int k) {
        return countSubstring(s, k) - countSubstring(s, k - 1);
    }
    int countSubstring(string &s, int k)
    {
        int low = 0;
        int high = 0;
        int n = s.size();
        int charFreq[26] = {0};
        int dist_count = 0;
        long ans = 0;
        while (high < n)
        {
            charFreq[s[high] - 'a']++;
            if (charFreq[s[high] - 'a'] == 1)
                dist_count++;
            while (dist_count > k)
            {
                charFreq[s[low] - 'a']--;
                if (charFreq[s[low] - 'a'] == 0)
                    dist_count--;
                low++;
            }
            ans += (high - low) + 1;
            high++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.countSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends