void Print_difficulty_menu(int k){
    Move(0,0);
    cout<<"\n";
    cout<<"                                            ";
    Move(0,0);
    cout<<"\n";
    cout<<" EASY ";
    if(k==0) cout<<" <-    \n\n";
    else cout<<"       \n\n";
    cout<<"NORMAL";
    if(k==1) cout<<" <-    \n\n";
    else cout<<"       \n\n";
    cout<<" HARD ";
    if(k==2) cout<<" <-    \n\n";
    else cout<<"       \n\n";
}