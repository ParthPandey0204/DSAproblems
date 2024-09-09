//{ Driver Code Starts
// Initial Template for C

#include <stdio.h>

int missingNumber(int n, int arr[]);


// } Driver Code Ends
// User function Template for C
// Note that the size of the array is n-1
int missingNumber(int n, int arr[]) {
   int sum = (n * (n+ 1)) / 2;

    int s2 = 0;
    for (int i = 0; i < n - 1; i++) {
        s2 += arr[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

//{ Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while (t > 0) {
        int n;
        scanf("%d", &n);

        int arr[n - 1];
        for (int i = 0; i < n - 1; i++) {
            scanf("%d", &arr[i]);
        }

        printf("%d\n", missingNumber(n, arr));
        t--;
    }

    return 0;
}
// } Driver Code Ends