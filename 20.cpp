#include <bits/stdc++.h> 
using namespace std; 
 
void pattern3(int n){ 
    for(int i=1; i<=2*n-1; i++){ 
        //star 
        int space = 2*(n-i)-1; 
        int star=i; 
        if(i>n){ 
            space=2*(i-n)-1; 
            star=(2*n)-i; 
        } 
        for(int j=1;j<=star;j++){ 
            cout<<"*"; 
          } 
          //space  
          for(int j=0;j<=space;j++){ 
              cout<<"-"; 
          } 
          for(int j=1;j<=star;j++){ 
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