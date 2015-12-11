/*基本算法 使用Hash
复杂度为O(n^2)，n为字符串的长度，辅助的空间为常数hash[256];
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s){
        int size=s.length();
        int maxlen=0;
        int maxindex=0;
        char visit[256];
        int i,j;
        
        for(i = 0; i < size; ++i)
        {
            memset(visit,0,sizeof visit);
            visit[s[i]] = 1;
            for(j = i+1; j < size; ++j)
            {
               if(visit[s[j]] == 0)
               {
                  visit[s[j]] = 1;
               }
               else
               {
                   if(j-i > maxlen)
                   {
                       maxlen = j - i;
                       maxindex = i;
                   }
				   break;
               }
            }
            if((j == size) && (j-i > maxlen))
            {
                maxlen = j - i;
                maxindex = i;
            }
            
        }
		return maxlen;
	}
  };
