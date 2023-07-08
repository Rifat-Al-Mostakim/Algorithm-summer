
#include<bits/stdc++.h>
using namespace std;

int fibonachi(int n)
{
    if (n<=1) return n;
    else return fibonachi (n-1)+ fibonachi (n-2);
}

int main (){
for (int i=0;i<=100;i++)
  {
   cout<<i<<"  "<<fibonachi(i)<<endl;
  }
  return 0;
}
