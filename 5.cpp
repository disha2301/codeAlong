#include <iostream>
using namespace std;

void pattern4(int num){
   for(int i=0;i<num;i++){
    for(int j=i;j<=num;j++){
        cout<<"* ";
    }
    cout<<endl;
   }
}
int main(){
    int num;
    cin>>num;
    pattern4(num);
    return 0;
}