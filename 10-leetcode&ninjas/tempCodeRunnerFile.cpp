int a =0;
    int b=1;
    int nextnumber=0;
    for (int i =0;i<n-1;i++){
        nextnumber= a+b;
        // cout<<nextnumber<< " ";
        a=b;
        b=nextnumber;

    }
    cout<<nextnumber;
    return 0;