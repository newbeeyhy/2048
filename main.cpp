#include"head.cpp"
#include"play.cpp"
#include"start_menu.cpp"
#include"size_menu.cpp"
#include"difficulty_menu.cpp"

void Play(int dif,int siz);
int Start_menu();
int Size_menu();

int main(){
    while(1){
        system("cls");
        int f1=Start_menu();
        if(f1==0){
            int f2=Difficulty_menu();
            int f3=Size_menu();
            int dif=f2,siz=4+f3*2;
            Play(dif,siz);
        }
        else return 0;
    }
    getchar();
    return 0;
}