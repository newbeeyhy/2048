#include"print\print_start_menu.cpp"

void Print_start_menu(int k);

int Start_menu(){
    int f=0;
    Print_start_menu(f);
    while(1){
        char c1=_getch();
        if(c1=='z') return f;
        char c2=_getch();
        if(c2==72) f=(f+2-1)%2;
        if(c2==80) f=(f+2+1)%2;
        Print_start_menu(f);
    }
}