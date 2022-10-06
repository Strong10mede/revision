void Solution() {
    long long n,x;
    cin>>n>>x;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    long long hogaya[n]={0};
    long long ans =0;
    int maxi =0;
    for (long long i = 0; i < n; i++)
    {
        if(hogaya[i]){
            continue;
        }
        long long posi = lower_bound(arr.begin()+maxi,arr.end(),arr[i]*x)-arr.begin();
        bool milgaya = false;
        while(posi<n){
            if(arr[posi]==arr[i]*x){
                if(hogaya[posi]){
                    posi++;
                }else{
                    hogaya[posi]=1;
                    maxi = posi;
                    milgaya = true;
                    break;
                }
            }else{
                break;
            }
        }
        if(!milgaya){
            ans++;
        }
    }
    cout<<ans<<endl;
    
    
    
}
