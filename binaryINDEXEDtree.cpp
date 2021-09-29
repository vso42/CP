
void update(ll i, ll x,vector<ll>&bit,ll N){            //binaryINDEXEDtree  (bit)
    for(; i <=N; i += (i&-i))
        bit[i] += x;
}

ll sum(ll i,vector<ll>&bit){
    ll ans = 0;
    for(; i > 0; i -= (i&-i))
        ans += bit[i];
    return ans;
}
