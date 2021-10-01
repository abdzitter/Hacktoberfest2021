// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	string equilibrium(int *arr, int n) 
	{
	    int i=0,j=n-1,sum1=arr[i],sum2=arr[j];
	    if(n==2)
	    return "NO";
	    else
	    {
	   while(i<j-2)
	   {
	    if(sum1>sum2)
	    {
	        j--;
	        sum2=sum2+arr[j];
	    }
	    else if(sum1<sum2)
	    {
	        i++;
	        sum1=sum1+arr[i];
	    }
	    else if(sum1==sum2)
	    {
	        i++;
	        j--;
	        sum1=sum1+arr[i];
	        sum2=sum2+arr[j];
	    }
	   }
	   if(sum1==sum2&&i==j-2)
	   return "YES";
	    }
	    return "NO";
	}
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends