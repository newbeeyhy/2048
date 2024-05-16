void Move(int x,int y){
    COORD pos;
    HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    pos.X=x;pos.Y=y;
    SetConsoleCursorPosition(hOut,pos);
}