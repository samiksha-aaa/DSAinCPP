#include<iostream>
#include<algorithm>
using namespace std;
string converttotile(int columnnumber){
string ans="";
while(columnnumber>0){
    columnnumber--;
    int rem=columnnumber%26;
    ans+=char('A'+rem);
    columnnumber/=26;
}
reverse(ans.begin(),ans.end());
return ans;
}
int main(){
    int columnnumber;
    cout<< "enter column number " <<endl;
    cin >> columnnumber;
    string ans=converttotile(columnnumber);
    cout<< "The corresponding column title is: " << ans << endl;
    return 0;
}