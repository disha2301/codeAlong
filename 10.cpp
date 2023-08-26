#include <iostream>
using namespace std;
void pattern(int num){
    for(int i=1;i<=2*num-1;i++){
        int star=i;
        if(i>num) star = 2*num - i;
        for(int j=1;j<=star;j++){
            cout<<"*";
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