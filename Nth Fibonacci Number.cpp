#include<bits/stdc++.h>
using namespace std;

int nthfibonacci(int nth)
{
        int ans;
        int pre=1;
        int cur=1;        
        if(nth==1||nth==2)
                return 1;
        else
        {
        for(int i=3; i<=nth; i++)
        {
                ans=pre+cur;
                pre=cur;
                 cur=ans;
        }
        return ans;
        }
        
}
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */

        int nth;
        int ans;
        cin>>nth;
        
        ans=nthfibonacci(nth);
        cout<<ans<<endl;
}