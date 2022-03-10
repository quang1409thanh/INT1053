#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    int i=1,j=n;
    while(i<j){
        int p=i+(j-i)/3;
        int q=i+2*(j-i)/3;
        cout<<p<<" "<<q<<endl;
        if(x<a[p]){
            j=p-1;
            cout<<1<<endl;
        }
        else if(x>=a[p]&&x<=a[q]){
            i=p;
            j=q;
            cout<<2<<endl;
        }
        else {
            i=q+1;
            cout<<3<<endl;
        }
    }
    if(x==a[i]){
        cout<<i;
    }
    else{
        cout<<0;
    }
    return 0;
}