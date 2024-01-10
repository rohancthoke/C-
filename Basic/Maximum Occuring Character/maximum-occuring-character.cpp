//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
{
    int n = str.size();
    char r = '0';
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > c)
        {
            c = count;
            r = str[i];
        }
        if (count == c){
            if(r>str[i]){
                r = str[i];
            }
            if(str[i]>r){
                r;
            }
        }
    }
    return r;
}


};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends