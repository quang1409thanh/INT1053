//ones(s)
#include<iostream>
#include<algorithm>

using namespace std;
int ones(string s){
    if(s=="0") return 0;
    else if(s=="1") return 1;
    else if(s[0]=='1') return ones(s.erase(0,1))+1;
    else return ones(s.erase(0,1));
}
int main(){
    string s;
    cin>>s;
    cout<<ones(s);
}