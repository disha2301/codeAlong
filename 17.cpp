#include <iostream>
using namespace std;
void pattern(int num){
    for(int i=0;i<num;i++){
        
        
        for(int j=0;j<num-i-1;j++){
            cout<<" ";
        }
        
        char ch = 'A';
        int breakpoint = (2*i + 1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<= breakpoint) ch++;
            else ch--;
        }
        
    
        for(int j=0;j<num-i-1;j++){
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