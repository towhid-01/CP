class Solution {
  public:
      string getPermutation(int n, int k) {
          vector<int>v;
          for(int i=1;i<=n;i++){
              v.push_back(i);
          }
          int j=1;
          do{
              if(j==k)break;
              j++;
          }
          while(next_permutation(v.begin(),v.end()));
          string s;
          for(int i=0;i<n;i++){
              s+=to_string(v[i]);
          }
      return s;
      }
  };