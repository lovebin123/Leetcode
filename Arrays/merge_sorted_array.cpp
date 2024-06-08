class Solution {
public:
      void merge(vector<int>& a, int m, vector<int>& b, int n) {
     int i,j;
     i=m;
     j=0;
     while(i<a.size() && j<b.size() )
     {
        a[i]=b[j];
        i++;
        j++;
     }
     sort(a.begin(),a.end());


      }
};