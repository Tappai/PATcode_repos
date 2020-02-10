#include<cstdio>
#include<string>
using namespace std;

struct Car{
    string P_num;
    int hh,mm,ss;
    string status;
};

struct TIME{
    int hh,mm,ss;
};

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    Car car[N];
    TIME time[M];
    for (int i = 0; i < N; i++){
        scanf("%s %d:%d:%d %s",&car[i].P_num,&car[i].hh,&car[i].mm,&car[i].ss,&car[i].status);    
    }
    for(int j=0;j<M;j++){
        scanf("%d:%d:%d",&time[j].hh,&time[j].mm,&time[j].ss);
    }
    
}