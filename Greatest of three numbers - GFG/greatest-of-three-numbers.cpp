//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int greatestOfThree(int A, int B, int C) {
        int n;

        vector<int> v;

        v.push_back(A);  

        v.push_back(B);

        v.push_back(C);

        sort(v.begin(),v.end());// sorting the vector by ascending order

        n = v.size();

        return v[n-1]; // returning the last element
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.greatestOfThree(A, B, C) << "\n";
    }
}

// } Driver Code Ends