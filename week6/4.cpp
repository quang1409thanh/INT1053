#include<iostream>
using namespace std;
string reserve(string s){
    if(s.length()==0) return "";
    else return s[s.length()-1]+reserve(s.substr(0,s.length()-1));
}
int main(){
    string a;
    cin>>a;
    cout<<reserve(a);
}