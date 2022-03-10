#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;// n là số phần tử của dây cần sắp xếp
    int a[100];
    for(int i=1;i<=n;i++){ 
        cin>>a[i];         // nhập từ bàn phím n số nguyên dương
    }
    int count=0;
    cout<<"ket qua tung buoc thuc hien cua thuat toan o cau 5 la : "<<endl;
    for(int j=2;j<=n;j++){
        //b1 sử dụng tìm nhị phân để tìm vị trí cần chèn
        int p=1,q=j;
        while(p<q){
            int m=(p+q)/2;
            if(a[m]<a[j])
                p=m+1;
            else q=m;
            count=count+1;
        }
        int pos=p; // kết thúc bước này tìm được vị trí cần chèn là pos
        //b2 chèn a[j] vào vị trí pos thích hợp
        int cons=a[j];//gán giá trị a[j] vào biến cons
        for(int i=j-1;i>=pos;i--){
            a[i+1]=a[i];
        }
        a[pos]=cons;// kết thúc bước này đã tìm chèn thành công a[j] vào vị trí pos;
        //b3 in ra màn hình kết quả các bước
        cout<<"{";
        cout<<"j="<<j<<endl;
        cout<<" pos(vi tri can chen a[j] )="<<pos<<endl;
        cout<<" day la: ";
        for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
        cout<<"}"<<endl;
        cout<<"----"<<endl;
    }
    cout<<"so phep so sanh la: "<<count<<endl;
}