#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string N;
    int sum=0;
    cin>>N;
    string s,ans;
    for(int j=0;j<N.size();j++){
        sum+=N[j]-'0';
    }
    while(sum>0){
        s+='0'+sum%10;
        sum=sum/10;
    }
    for(int i=s.size()-1;i>=0;i--){
        switch (s[i]){
        case '0':ans+="zero";break;
        case '1':ans+="one";break;
        case '2':ans+="two";break;
        case '3':ans+="three";break;
        case '4':ans+="four";break;
        case '5':ans+="five";break;
        case '6':ans+="six";break;
        case '7':ans+="seven";break;
        case '8':ans+="eight";break;
        case '9':ans+="nine";break;
        default:
            break;
        }
        ans+=' ';
    }
    cout<<ans<<endl;
    return 0;
}