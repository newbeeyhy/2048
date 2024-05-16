void Refresh(int dif,int siz){
    int hv=0;
    vector<int> r,c;
    for(int i=0;i<siz;i++){
        int b=0;
        for(int j=0;j<siz;j++){
            if(ground[i][j]==0) b++;
            else hv++;
        }
        if(b){
            r.push_back(i);
            c.push_back(b);
        }
    }
    if(dif!=0&&Rand(1,100)<=(dif==1?30:70)){
        int div=Rand(1,hv);
        for(int i=0;i<siz;i++){
            for(int j=0;j<siz;j++){
                if(ground[i][j]!=0) div--;
                if(div==0) ground[i][j]/=2;
            }
        }
    }
    int n=r.size(),p=Rand(0,n-1),x=r[p],q=Rand(0,c[p]-1),y;
    for(int i=0,j=0;i<siz;i++){
        if(!ground[x][i]){
            if(j==q){
                y=i;
                break;
            }
            j++;
        }
    }
    int num=(Rand(1,100)<=60)?2:4;
    ground[x][y]=num;
}