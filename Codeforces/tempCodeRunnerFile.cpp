int main()
{
    fastio;
    While(T)
    {
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        vll check(n+1,0);

        ll count = 0;
        for(ll i=0;i<n;)
        {
            if(s[i] == '1'){
                i = i+k;
                count++;
                if(i>=n) break;
            }
            debug(i);
        }
        debug(count);
    }
    return 0;
}