class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> st;
        queue<int> sd;
        int count=0;
        for(int i=0;i<students.size();i++){
            st.push(students[i]);
        }
         for(int i=0;i<sandwiches.size();i++){
            sd.push(sandwiches[i]);
        }
        while(!st.empty()&& count<st.size()){
        if(st.front()==sd.front()){
            st.pop();
            sd.pop();
            count=0;
        } else{
            st.push(st.front());
            st.pop();
            count++;
        }
        }
      return st.size();
    }
};