class Twitter {
  public:
    vector<pair<int,int>>posts;
    unordered_map<int,unordered_map<int,int>>follows;

    Twitter() {}

    void postTweet(int userId, int tweetId) {
        posts.push_back(make_pair(userId,tweetId));
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int>feed;      int cnt=0;
        for(int i=posts.size()-1;i>=0 &&cnt<10;i--){
            if(posts[i].first==userId || follows[userId][posts[i].first])
                feed.push_back(posts[i].second),cnt++;
        }
        return feed;
    }
    
    void follow(int followerId, int followeeId) {
        follows[followerId][followeeId]=1;
    }
    
    void unfollow(int followerId, int followeeId) {
        follows[followerId][followeeId]=0;
    }
};
