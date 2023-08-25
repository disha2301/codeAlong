#include <iostream>
using namespace std;

void pattern(int num){
    for(int x=1;x<=num;x++){
        for(int y=1;y<=x;y++){
            cout<<y;
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