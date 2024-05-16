void Init(int siz){
    memset(ground,0,sizeof(ground));
    int p=Rand(0,3);
    if(p==0) ground[0][0]=2;
    if(p==1) ground[0][3]=2;
    if(p==2) ground[3][0]=2;
    if(p==3) ground[3][3]=2;
    Refresh(0,siz);
    for(int i=0;i<siz;i++){
        for(int j=0;j<siz;j++){
            if(ground[i][j]==4) ground[i][j]=2;
        }
    }
}