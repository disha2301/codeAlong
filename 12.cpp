#include <iostream>
using namespace std;
void pattern(int num){
    int space = 2 * (num-1);
    for(int i=0;i<num;i++){
       //numbers
       for(int j=1;j<=i;j++){
        cout<<j;
       }

       //space
       for(int j =1;j<=space;j++){
        cout<<" ";
       }

       //numbers
       for(int j=i;j>=1;j--){
        cout<<j;
       }
       cout<<endl;
       space = space -2;
    }

}
int main(){
    int num;
    cin>>num;
    pattern(num);
    return 0;
}