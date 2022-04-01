// #include<iostream>
// #include<cstring>
// using namespace std;
// void rFilter(char *s){
//     int pos=strlen(s);
//     int n;
//     for(int i=0;i<pos;i++){
//         if(s[i]>'z'||(s[i]<'a'&&s[i]>'Z'||s[i]<'A')) {
//             n=i;
//             break;
//         }
//         else n=pos;
//     }
//     for(int i=n;i<pos;i++){
//         s[i]='_';
//     }
// }
// int main(){
//     char *s;
//     s = new char[50];
//     *s='\0';
//     //cin >> s;
//     rFilter(s);
//     cout <<':'<< s;
// }
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int m(string s){
    if(s.length()==1) return s[0]-'0';
    else return max(m(s.erase(0,1)), s[0]-'0');
    }
int main(){
    string s;
    cin>>s;
    cout<<m(s);
}