#include <bits/stdc++.h>
using namespace std;
void solve(int a,int b ,int c)
{
  int n=max(a,b),sum;
  n=max(n,c);
  for( int i=0;i<n;i++)
    {
      sum=sum+i;
    }
  cout<<sum<<endl;
}
// doing some changes in this prorgam through comments to reflect it back on my repo

int main()
{
  int t;
  cin>>t;
  vector<int> num(3);
  for(int i=0;i<t;i++)
    {
      cin>>nums[i][0]>>nums[i][1]>>nums[i][2];
    }
  for(int i=0;i<t;i++)
    {
      solve(nums[i][0],nums[i][1],nums[i][2]);
    }
  return 0;
}
