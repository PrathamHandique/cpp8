#include <iostream>
using namespace std;
int main()
{
 int N,i,j;
 cin>>N;
 for(i=0;i<N;i++){
 for(j=0;j<=i;j++){
 if((i+1)%2==0)
 cout<<2*j+2<<" ";
 else
 cout<<2*j+1<<" ";
 }cout<<"\n";
 }
return 0;
}
