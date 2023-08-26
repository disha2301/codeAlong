#include <iostream>
using namespace std;
void pattern(int num){
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
    pattern(num);
    return 0;
}