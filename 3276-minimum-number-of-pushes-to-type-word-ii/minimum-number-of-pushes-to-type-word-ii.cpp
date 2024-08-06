class Solution {
public:
    int minimumPushes(string word) {
      map<char,int>m;
      for(auto it:word)
      {
        m[it]++;
      }
      vector<int>freq;
      for(auto it:m)
      {
        freq.push_back(it.second);
      }
      sort(freq.rbegin(),freq.rend());
      int minpush=0;
      int i=1;
      for(auto it:freq)
      {
            int k=i/8;
            if(i%8!=0)
            {
                 k=k+1;
            }
            minpush+=it*k;
            i++;

      }
      return minpush;
    }
};