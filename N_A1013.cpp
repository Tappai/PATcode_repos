#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int A,B;
    cin>>A>>B;
    int SUM=A+B;
    int flag=1;
    if(SUM<0) {SUM=-SUM;flag=-1;}
    string s;
    int count=1;
    while(SUM>0){
        s+='0'+SUM%10;
        if(count==3&&SUM>10){s+=',';count=0;}
        SUM=SUM/10;
        count++;
    }
    if(flag==-1) s+='-';
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;

}