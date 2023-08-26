#include <bits/stdc++.h> 
using namespace std; 
 
void pattern3(int n){ 
    for(int i=0; i<n; i++){ 
        //star 
        for(int j=1;j<=n-i;j++){ 
            cout<<"*"; 
             
          } 
           
          //space  
          for(int j=1;j<=2*i;j++){ 
              cout<<" "; 
          } 
           
//star 
for(int j=1;j<=n-i;j++){ 
            cout<<"*"; 
             
          } 
          cout<<endl; 
    } 
    for(int i=0; i<n; i++){ 
        //star 
        for(int j=0;j<=i;j++){ 
            cout<<"*"; 
             
          } 
          //space 
          for(int j=0;j<2*(n-i)-2;j++){ 
            cout<<"-"; 
             
          } 
          //star 
          for(int j=0;j<=i;j++){ 
            cout<<"*"; 
             
          } 
          cout<<endl; 
          
    } 
 } 
 
int main(){ 
    int n; 
    cin>>n; 
    pattern3(n); 
    }