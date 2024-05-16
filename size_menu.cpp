#include"print\print_size_menu.cpp"

void Print_size_menu(int k);

int Size_menu(){
    int f=0;
    Print_size_menu(f);
    while(1){
        char c1=_getch();
        if(c1=='z') return f;
        char c2=_getch();
        if(c2==72) f=(f+3-1)%3;
        if(c2==80) f=(f+3+1)%3;
        Print_size_menu(f);
    }
}