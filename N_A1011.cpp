#include<iostream>
#include<cstring>
using namespace std;

struct stu{
    string name;
    char gender;
    string ID;
    int grade;
};

int main(){
    int N;
     cin>>N;
    stu s[N];
   
    for (int i = 0; i < N; i++){
        cin>>s[i].name>>s[i].gender>>s[i].ID>>s[i].grade;
    }
    int F_high,M_low;
    F_high=0;M_low=101;
    int F_high_ID,M_low_ID;
    F_high_ID=M_low_ID=0;
    int F_flag,M_flag;
    F_flag=M_flag=-1;
    for (int j = 0; j < N; j++){
        if(s[j].gender=='M'&&s[j].grade<M_low){
            M_low=s[j].grade;
            M_low_ID=j;
            M_flag=1;
        }
        if (s[j].gender=='F'&&s[j].grade>F_high){
            F_high=s[j].grade;
            F_high_ID=j;
            F_flag=1;
        }
    }
    if(F_flag==-1){
        cout<<"Absent"<<endl;
    }
    else{
        cout<<s[F_high_ID].name<<' '<<s[F_high_ID].ID<<endl;
    }
    if(M_flag==-1){
        cout<<"Absent"<<endl;
    }
    else{
        cout<<s[M_low_ID].name<<' '<<s[M_low_ID].ID<<endl;
    }
    if(M_flag==1&&F_flag==1){
        cout<<s[F_high_ID].grade-s[M_low_ID].grade<<endl;
    }
    else{
        cout<<"NA"<<endl;
    }
    return 0;
}