/*DP+Hash 方案
复杂度为O(n)，n为字符串的长度，辅助的空间为常数hash[256];
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s){
        int size=s.length();
        int maxlen=0;
        int maxindex=0;
		int last_start=0;
        char visit[256];
		int dp[100];
        memset(visit,-1,sizeof visit);
		memset(dp,0,sizeof dp);
		dp[0]=1;
		visit[s[0]]=0;
		
        for(int i = 1; i < size; ++i)
        {
            if(visit[s[i]]==-1)
			{
				dp[i]=dp[i-1]+1;
				visit[s[i]]=i;   /* 记录字符下标 */
			}
			else
			{  
				if(last_start <= visit[s[i]])
				{
					dp[i]=i - visit[s[i]];
					last_start=visit[s[i]]+1;
					visit[s[i]]=i; /* 更新最近重复位置 */
				}else
				{
					dp[i]=dp[i-1]+1;
					visit[s[i]]=i; /* 更新最近重复位置 */
				}
			
			}
			if(dp[i]>maxlen)
			{
				maxlen=dp[i];
				maxindex=i+1-maxlen;
			}
		}
		return maxlen;
	}
  };
