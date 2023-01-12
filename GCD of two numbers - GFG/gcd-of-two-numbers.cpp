//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	  if(A == 0){
            return B;
        }
        
        if(B == 0){
            return A;
        }
        
        if(A == B){
            return A;
        }
        
        if(A > B){
            return gcd(B, A % B);
        }
        
        if(B > A){
            return gcd(B % A, A);
        }
        
        return -1;
	      
	} 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
// } Driver Code Ends