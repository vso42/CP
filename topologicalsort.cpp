int n;
cin>>n;

vector<int> d(n+1,0);              //degree array
int i,j;
map<int,vector<int>> mp;           // graph
for(i=1;i<=n;i++){
    cin>>now;
    for(j=1;j<=now;j++){
        cin>>k;
        mp[k].pb(i);
    }
    d[i]=now;              // dependencies
}

set<int > s;                    // one can take queue also this was special case
for(i=1;i<=n;i++){
    if(d[i]==0) s.insert(i);    // if depensencies r 0 insert it
     
}
if(s.empty()){
    cout<<-1<<"\n";               /// if nothing is found print at the beginning only its impossible
    return;
}

int ans=0;
bool ok;c=0;
while(!s.empty()){                          // while queue or set is not empty
auto x=s.lower_bound(c);
if(x==s.end()) x=s.begin();
c=*x;                                      // take first element
s.erase(x);
a.pb(c);

for(auto it:mp[c]){
    d[it]--;                                // subtract one - one from all those who have a depency c and if they now have 0 dependency insert it
    if(d[it]==0) 
    s.insert(it);
}


}

