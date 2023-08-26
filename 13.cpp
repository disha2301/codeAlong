#include <iostream>
using namespace std;
void pattern(int num){
   int count = 1;
   for(int i = 1; i<=num;i++){
    for(int j=1;j<=i;j++){
        cout<<count<<" ";
        count++;
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