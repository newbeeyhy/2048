int Judge(int siz){
    int flag=0;
    for(int i=0;i<siz;i++){
        for(int j=0;j<siz;j++){
            if(!ground[i][j]) continue;
            int k=i;
            while(k>=1){
                if(!ground[k-1][j]) k--;
                else break;
            }
            if(k==0&&k!=i) flag=1;
            else if(ground[k-1][j]==ground[i][j]||k!=i) flag=1;
        }
    }
    for(int i=siz-1;i>=0;i--){
        for(int j=0;j<siz;j++){
            if(!ground[i][j]) continue;
            int k=i;
            while(k<siz-1){
                if(!ground[k+1][j]) k++;
                else break;
            }
            if(k==siz-1&&k!=i) flag=1;
            else if(ground[k+1][j]==ground[i][j]||k!=i) flag=1;
        }
    }
    for(int i=0;i<siz;i++){
        for(int j=0;j<siz;j++){
            if(!ground[i][j]) continue;
            int k=j;
            while(k>=1){
                if(!ground[i][k-1]) k--;
                else break;
            }
            if(k==0&&k!=j) flag=1;
            else if(ground[i][k-1]==ground[i][j]||k!=j) flag=1;
        }
    }
    for(int i=0;i<siz;i++){
        for(int j=siz-1;j>=0;j--){
            if(!ground[i][j]) continue;
            int k=j;
            while(k<siz-1){
                if(!ground[i][k+1]) k++;
                else break;
            }
            if(k==siz-1&&k!=j) flag=1;
            else if(ground[i][k+1]==ground[i][j]||k!=j) flag=1;
        }
    }
    return flag;
}