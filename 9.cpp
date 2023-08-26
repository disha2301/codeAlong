#include <iostream>
using namespace std;
void pattern7(int num){
    for(int i=0;i<num;i++){
        
        
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        }
        
        
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
    
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
void pattern8(int num){
    for(int i=0;i<num;i++){
        
        
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        
        
        for(int j=0;j<2*(num-i)-1;j++){
            cout<<"*";
        }
    
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int num;
    cin>>num;
    pattern7(num);
    pattern8(num);
    return 0;
}