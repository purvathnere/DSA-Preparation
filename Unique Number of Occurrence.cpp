bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        set<int> freq;
        for(auto it:mp)
            freq.insert(it.second);
            
        return mp.size()==freq.size();
    }

