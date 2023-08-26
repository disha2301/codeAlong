#include <iostream>
using namespace std;
void pattern(int num){
  for(int i =0;i<num;i++){
    for(char ch = 'A'; ch<='A'+ (num-i-1);ch++){
        cout<<ch;
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