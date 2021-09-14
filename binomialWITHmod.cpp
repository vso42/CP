ll binPow(ll a,ll b){
    if (b == 0)return 1;
    if (b == 1)return a;
    ll ret = binPow(a,b/2);
    if (b%2 == 0)return (ret * ret)%P;
    return ((ret * ret)%P * a)%P;}

ll inv(ll a){return (binPow(a,P - 2ll)%P + P)%P;}

ll binom(ll a,ll b){
    if (b < 0 or a < 0)return 0;
    return (((fc[a] * inv(fc[b]))%P * inv(fc[a - b]))%P + P)%P;}   //FC is the factorial vector , P=1e9+7
