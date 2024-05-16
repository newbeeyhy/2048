void Print_num(int x){
    if(x==0){
        printf("\033[0m\033[47m    \033[0m|");
        return;
    }
    if(x<10) printf("\033[0m\033[47;30m%3d \033[0m|",x);
    else if(x<100) printf("\033[0m\033[47;30m%3d \033[0m|",x);
    else if(x<1000) printf("\033[0m\033[47;30m%4d\033[0m|",x);
    else printf("\033[0m\033[47;30m%d\033[0m|",x);
}