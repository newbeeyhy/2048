pair<int,int> Merge(int p,int siz){
    int flag=0,res=0;
    if(p==72){ //up
        for(int i=0;i<siz;i++){
            for(int j=0;j<siz;j++){
                if(!ground[i][j]) continue;
                int k=i;
                while(k>=1){
                    if(!ground[k-1][j]) k--;
                    else break;
                }
                if(k==0){
                    ground[k][j]=ground[i][j];
                    if(k!=i){
                        flag=1;
                        ground[i][j]=0;
                    }
                }
                else{
                    if(ground[k-1][j]==ground[i][j]){
                        res+=ground[k-1][j];
                        ground[k-1][j]*=2;
                        ground[i][j]=0;
                        flag=1;
                    }
                    else ground[k][j]=ground[i][j];
                    if(k!=i){
                        ground[i][j]=0;
                        flag=1;
                    }
                }
            }
        }
    }
    if(p==80){ //down
        for(int i=siz-1;i>=0;i--){
            for(int j=0;j<siz;j++){
                if(!ground[i][j]) continue;
                int k=i;
                while(k<siz-1){
                    if(!ground[k+1][j]) k++;
                    else break;
                }
                if(k==siz-1){
                    ground[k][j]=ground[i][j];
                    if(k!=i){
                        flag=1;
                        ground[i][j]=0;
                    }
                }
                else{
                    if(ground[k+1][j]==ground[i][j]){
                        res+=ground[k+1][j];
                        ground[k+1][j]*=2;
                        ground[i][j]=0;
                        flag=1;
                    }
                    else ground[k][j]=ground[i][j];
                    if(k!=i){
                        ground[i][j]=0;
                        flag=1;
                    }
                }
            }
        }
    }
    if(p==75){ //left
        for(int i=0;i<siz;i++){
            for(int j=0;j<siz;j++){
                if(!ground[i][j]) continue;
                int k=j;
                while(k>=1){
                    if(!ground[i][k-1]) k--;
                    else break;
                }
                if(k==0){
                    ground[i][k]=ground[i][j];
                    if(k!=j){
                        flag=1;
                        ground[i][j]=0;
                    }
                }
                else{
                    if(ground[i][k-1]==ground[i][j]){
                        res+=ground[i][k-1];
                        ground[i][k-1]*=2;
                        ground[i][j]=0;
                        flag=1;
                    }
                    else ground[i][k]=ground[i][j];
                    if(k!=j){
                        ground[i][j]=0;
                        flag=1;
                    }
                }
            }
        }
    }
    if(p==77){ //right
        for(int i=0;i<siz;i++){
            for(int j=siz-1;j>=0;j--){
                if(!ground[i][j]) continue;
                int k=j;
                while(k<siz-1){
                    if(!ground[i][k+1]) k++;
                    else break;
                }
                if(k==siz-1){
                    ground[i][k]=ground[i][j];
                    if(k!=j){
                        flag=1;
                        ground[i][j]=0;
                    }
                }
                else{
                    if(ground[i][k+1]==ground[i][j]){
                        res+=ground[i][k+1];
                        ground[i][k+1]*=2;
                        ground[i][j]=0;
                        flag=1;
                    }
                    else ground[i][k]=ground[i][j];
                    if(k!=j){
                        ground[i][j]=0;
                        flag=1;
                    }
                }
            }
        }
    }
    return make_pair(flag,res);
}