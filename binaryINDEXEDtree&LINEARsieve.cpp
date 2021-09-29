void sieve(){                            //LINEAR Sieve
  vector<ll> pr;
  ll i,j;
  for ( i=2; i<=1e5; ++i) {
    if (lp[i] == 0) {
      lp[i] = i;pr.push_back (i);
    }
    for ( j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=1e5; ++j)
        lp[i * pr[j]] = pr[j];
  }
}

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
