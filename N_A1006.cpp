#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void Trans(int RGB,string &s){
    while(RGB>0){
        if(RGB%13<10){
            s+='0'+RGB%13;
        }
        else{
            s+='A'+RGB%13-10;
        }
        RGB=RGB/13;
    }

    if(s[1]==NULL){
        s+='0';
    }
}

int main(){
    int R,G,B;
    string s1,s2,s3,s;
    cin>>R>>G>>B;
    s+='#';
    Trans(R,s1);
    Trans(G,s2);
    Trans(B,s3);
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    reverse(s3.begin(),s3.end());
    s+=s1+s2+s3;
    cout<<s<<endl;
    return 0;
}
