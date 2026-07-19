 #include<iostream>
 using namespace std;
 bool isSubsequence(string s, string t) {
     int i=0;
     int j=0;
     while(i<s.size() && j<t.size()){
        if(s[i]==t[j]){
            i++;
        } 
            j++;
    
     } return i==s.size();
    }
    int main(){
      string s;
        string t;
        cout << "enter s: " << endl;
        cin >> s;
        cout << "enter t: " << endl;
        cin >> t;
        bool ans=isSubsequence(s,t);
        cout << ans;
        return 0;
    }