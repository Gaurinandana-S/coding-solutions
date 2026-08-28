double myPow(double x, int n) {
    double pow_n=1;
    long long nn=n;
    int i;

    if(nn<0){
        x=1/x;
        nn=-1*nn;
    }
    while(nn>0){
        if (nn%2==1){
            pow_n*=x;
        }
        x*=x;
        nn/=2;
    }
    
    return pow_n;
}