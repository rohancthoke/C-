//{ Driver Code Starts
//Initial Template for C++


#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    //Complete this function
    int digitalRoot(int n)
    {
        //Your code here
         if(n < 10){

            return n;

        }

        int p = n%10;

        int sum = p + digitalRoot(n/10);

    

        if(sum >= 10){

            return digitalRoot(sum);

        }

        return sum;

    }
        
    
};

//{ Driver Code Starts.


int main() {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n
	    
	    //calling digitalRoot() function
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}
// } Driver Code Ends
