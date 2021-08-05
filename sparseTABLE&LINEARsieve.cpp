void sieve(){vector<int> pr;   //LINEAR SIEVE O(n)
for (int i=2; i<=1e6; ++i) {
    if (lp[i] == 0) {    lp[i] = i;pr.push_back (i);}
    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=1e6; ++j)
        lp[i * pr[j]] = pr[j];
        }
        }

void solve(vector<ll>&b ,ll n,vector<vector<ll>>& tb){ //SPARSE TABLE FOR GCD
ll lg=Log2n(n);
ll i,j;
tb.assign(lg+2,vector<ll>(n));
for(i=0;i<=lg;i++){
    ll cl=(1ll<<i);    //2^I
    for(j=0;j+cl<=n;j++){
        if(cl==1){
            tb[i][j]=b[j];
        }
        else{
            tb[i][j]=__gcd(tb[i-1][j],tb[i-1][j+(cl/2ll)]);
        }
    }
}
//debug(tb);
}
