int majorityElement(int a[], int size)
{
    
    map<int,int>mp;
    for(int i=0;i<size;i++)
    {
        mp[a[i]]++;
    }
    int k=size/2;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>k)
        {
            return it->first;
        }
    }
    return -1;
    
}
