int Operation(int *point,int dif,int siz){
    while(1){
        char c1=_getch();
        if(c1=='g'){
            Gacha(point,siz);
            continue;
        }
        char c2=_getch();
        int flag=0;
        while(1){
            pair<int,int> tmp=Merge((int)c2,siz);
            flag|=(tmp.first>0?1:0);
            *point+=tmp.second;
            if(!Judge(siz)) return -1;
            if(!tmp.first) break;
        }
        if(!Judge(siz)) return -1;
        if(flag) break;
    }
    if(!Judge(siz)) return -1;
    if(Win(siz)) return 1;
    Refresh(dif,siz);
    Print_ground(*point,siz);
    if(!Judge(siz)) return -1;
    return 0;
}