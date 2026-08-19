class Solution {
public:
    string removeStars(string s) {
        stack<char> q;
        for(char ch:s){
                if(ch=='*'){
                   q.pop();
                }else{
                    q.push(ch);
                }
            }
        string ans="";
        while(!q.empty()){
         ans+=q.top();
         q.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};