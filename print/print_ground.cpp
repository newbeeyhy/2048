void Print_ground(int point,int siz){
    Move(0,0);
    cout<<"POINT: "<<point<<"      "<<endl;
    for(int i=0;i<siz*5+1;i++){
        if(i%5==0) putchar('*');
        else putchar('-');
    }
    putchar('\n');
    for(int i=0;i<siz;i++){
        putchar('|');
        for(int j=0;j<siz;j++){
            Print_num(ground[i][j]);
        }
        putchar('\n');
        for(int j=0;j<siz*5+1;j++){
            if(j%5==0) putchar('*');
            else putchar('-');
        }
        putchar('\n');
    }
}