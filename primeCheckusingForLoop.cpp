//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Complete this function
string isPrime(int n) {
     if(n == 1)

    {

        return "No";

    }

    for (int i = 2; i <= sqrt(n); i++) {

            if(n%i == 0){

                return "No";

            }

    }

    return "Yes";
        /*n is prime only if it is not divisible by any i.
        We will not reach till n and 1 is already discarded*/
    }
    
    


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << isPrime(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
