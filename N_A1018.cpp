#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    string ID,time_in,time_out;
    string time_min="23:59:59",time_max="00:00:00";
    string ID_min,ID_max;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>ID>>time_in>>time_out;
        if(time_in<time_min){
            time_min=time_in;
            ID_min=ID;
        }
        if(time_out>time_max){
            time_max=time_out;
            ID_max=ID;
        }
    }
    cout<<ID_min<<' '<<ID_max<<endl;
    return 0;
}