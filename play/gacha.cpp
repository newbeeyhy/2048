void Gacha(int *point,int siz){
    while(1){
        if(Win(siz)) return;
        if(*point<100) return;
        int f=0;
        Print_gacha(f,siz);
        while(1){
            char c1=_getch();
            if(c1=='z') break;
            char c2=_getch();
            if(c2==72) f=(f+2-1)%2;
            if(c2==80) f=(f+2+1)%2;
            Print_gacha(f,siz);
        }
        Move(0,2+2*siz);
        cout<<"                                                     "<<endl;
        cout<<"                                                     "<<endl;
        cout<<"                                                     "<<endl;
        cout<<"                                                     "<<endl;
        cout<<"                                                     "<<endl;
        if(f==0){
            *point-=100;
            Print_ground(*point,siz);
            Move(0,2+2*siz);
            if(Rand(1,100)<=20){
                cout<<"SUCCESSFUL"<<endl;
                cout<<"INPUT COORDINATES: ";
                int x,y;
                cin>>x>>y;
                ground[x-1][y-1]*=2;
                Print_ground(*point,siz);
                Move(0,2+2*siz);
                cout<<"                                                     "<<endl;
                cout<<"                                                     "<<endl;
                cout<<"                                                     "<<endl;
                cout<<"                                                     "<<endl;
                cout<<"                                                     "<<endl;
            }
        }
        else{
            break;
        }
    }
}