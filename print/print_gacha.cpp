void Print_gacha(int k,int siz){
    Move(0,2+2*siz);
    cout<<"                                        \n";
    cout<<"TRY?                                    \n"<<endl;
    cout<<"YES ";
    if(k==0) cout<<" <-    \n";
    else cout<<"       \n";
    cout<<"NO  ";
    if(k==1) cout<<" <-    \n";
    else cout<<"       \n";
}