class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> index;
        int index1,index2;
        for(int i=0; i<nums.size(); i++)
           {              
               for(int j=i+1; j<nums.size(); j++)
               {           
                     if(nums[i]+nums[j]==target)
                     {
                       index1=i;
                       index2=j;
                       index.push_back(i+1);
                       index.push_back(j+1);
                       break;
                     }					 					
               }             
           }        
        return index;
    }
};  