include<bits/stdc++.h>
using namespace std;
int main()
{ 
string s;
cin>>s;
int arr[26] = {0};
for(char & c:s)
{
if(c>=97 && c<=122){
arr[c-97]= 1;
}
else if(c>=67 && c<= 90) 
{
arr[c-90] = 1;
}
}
int flag=0;
for(int i=0;i<26;i++)

{ 
if(arr[i]==0) {
flag=1;
break;
}
}
if(flag) cout<<"pangram";
else cout<<"non";
return 0;

}
