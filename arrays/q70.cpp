#include<iostream>
using namespace std;
int climbstairs(int n){
if(n<=2){
    return n;
}
int first=1;
int second=2;
for(int i=3;i<=n;i++){
    int current=first+second;
    first=second;
    second=current;
    } return second;
}
int main(){
    int n;
    cout << "enter n: " <<endl;
    cin >> n;
    cout << "no. of ways to clmb the stairs are: " << climbstairs(n) << endl;
    return 0;
}