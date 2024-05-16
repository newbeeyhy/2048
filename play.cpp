#include"play\ground.cpp"
#include"play\rand.cpp"
#include"play\refresh.cpp"
#include"play\init.cpp"
#include"print\move.cpp"
#include"print\print_num.cpp"
#include"print\print_ground.cpp"
#include"print\print_gacha.cpp"
#include"play\merge.cpp"
#include"play\judge.cpp"
#include"play\win.cpp"
#include"play\gacha.cpp"
#include"play\operation.cpp"

int Rand(int l,int r);
void Refresh(int dif,int siz);
void Init(int siz);
void Move(int x,int y);
void Print_num(int x);
void Print_ground(int point,int siz);
pair<int,int> Merge(int p,int siz);
int Judge(int siz);
int Win(int siz);
void Print_gacha(int k,int siz);
void Gacha(int *point,int siz);
int Operation(int *point,int dif,int siz);

void Play(int dif,int siz){
    srand(time(NULL));
    Init(siz);
    Print_ground(0,siz);
    int point=0;
    while(1){
        int flag=Operation(&point,dif,siz);
        if(flag==-1){
            cout<<"You Lose.";
            break;
        }
        if(flag==1){
            cout<<"You Win!!!";
            break;
        }
    }
    getchar();
}