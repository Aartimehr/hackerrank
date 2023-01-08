#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int n, j;
    int i=0,RightDiagonalSum=0,LeftDiagonalSum=0, firstarray, secondarray;
  cin>>n;
    int a[n][n];
    
 for(int firstarray = 0; firstarray < n; firstarray++)
 {
       for(int secondarray = 0; secondarray < n; secondarray++)
    {
         
         cin>>a[firstarray][secondarray];
       }
    }
 
  while(i<n)
  {
    RightDiagonalSum=RightDiagonalSum+a[i][i];
    i++;
  }
    
 j=n-1,i=0;
    
  while(i<n)
  {
    LeftDiagonalSum=LeftDiagonalSum+a[i][j];
    i++;
    j--;
  }
    
 cout<<abs(RightDiagonalSum-LeftDiagonalSum);
    return 0;
}
