#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int n){
vector<vector<int>> ans;
for(int i=0;i<n;i++){
    vector<int> rows(i+1);
    rows[0]=1;
    rows[i]=1;
    for(int j=1;j<i;j++){
        rows[j]=ans[i-1][j-1]+ans[i-1][j];
    } ans.push_back(rows);
}
return ans;
}
vector<int> getRow(int rowIndex) {
    vector<vector<int>> ans;
    for(int i=0;i<=rowIndex;i++){
        vector<int> rows(i+1);
        rows[0]=1;
        rows[i]=1;
        for(int j=1;j<i;j++){
            rows[j]=ans[i-1][j-1]+ans[i-1][j];
        } ans.push_back(rows);
    }
    return ans[rowIndex];
}
int main(){
    cout<<"enter the number of rows: ";
    int n;
    cin >> n ;
    vector<vector<int>> answer=generate(n);
cout << "The pascal triangle is:" << endl;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout << answer[i][j] << " ";
    }
    cout << endl;
}
int rowIndex;
cout<<"enter the row index: ";
cin>>rowIndex;
for(int i=rowIndex;i<=rowIndex;i++){
    for(int j=0;j<=i;j++){
        cout<<answer[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}