#include <iostream>
using namespace std;
void pattern(int num){
  for(int i = 0;i<num;i++){
    char ch = 'A'+i;
    for(int j = 0;j<=i;j++){
        cout<<ch<<" ";
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