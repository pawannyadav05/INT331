#include <bits/stdc++.h>
using namespace std;
//memorization
    //tc -> o(n) sc -> o(n)
vector<int>dp;
int sol(int n){
    if(n<=1) return n;

    if(dp[n]!=-1) return dp[n];

    return dp[n]=sol(n-1)+sol(n-2);
}
int fib(int n) {
    dp.resize(n+1,-1);
    return sol(n);
}

//tabulation
int tabulationFib(int n){
    dp.resize(n+1,-1);
    if(n<=1) return n;
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n]; 
    //tc -> o(n) sc -> o(n)
}
int spaceoptFib(int n){
    if(n<=1) return n;
    int prev2=0;
    int prev=1;
    for(int i=2;i<=n;i++){
        int currI=prev + prev2;
        prev2=prev;
        prev=currI;
    }
    return prev;
}
int main(){
}
