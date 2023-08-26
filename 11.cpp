#include <iostream>
using namespace std;
void pattern(int num){
    int start=1;
    for(int i=0;i<num;i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1- start;
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