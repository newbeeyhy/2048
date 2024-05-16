int Win(int siz){
    for(int i=0;i<siz;i++){
        for(int j=0;j<siz;j++){
            if(ground[i][j]==2048) return 1;
        }
    }
    return 0;
}