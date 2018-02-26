#include <iostream>
using namespace std;
 
int main()
{	
int a, b; 
cout<<"Enter start Number: ";
cin>>a;
cout<<"Enter end Number: ";
cin>>b;
for(int i=a;i<=b;i++)
{
if(i%2 ==0)
{ 
cout<<i<<endl;
}
}
return 0;
}