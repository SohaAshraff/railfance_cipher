
#include <iostream>
#include <regex>

using namespace std;
#include<vector> 
int main()
{
   int k= 0 ;
   int s=0;
   int x=0 ; 
   string a;
   getline(cin , a);
   a= regex_replace(a, regex("\\s+"), "");

   
   int n=a.length();
    vector<string>v(n);
   for(int j=0;j<3;j++)
 {
     for (int i=s;i<n;i=i+3)
     { 
       v[x]=a[i];
         cout<<a[i]<<"      ";
         x=x+1;
         
     }
    cout<<endl;
k=k+1 ; 
s=k;

 }
 cout<<"************************************************************************"<<endl<<"The encrypted message is : "<<endl<<endl;
 for(int x=0 ; x<n;x++)
 {
    
     
     cout<<v[x]<<" "; 
     
 }
    return 0;
}