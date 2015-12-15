class Solution {
public:
   double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	vector<int> merge;
	vector<int>::iterator i1=nums1.begin();
	vector<int>::iterator i2=nums2.begin();

	while(i1!=nums1.end()&&i2!=nums2.end())
	{
		if(*i1<*i2)
		{
			merge.push_back(*i1);
			i1++;
		}
		else
		{
			merge.push_back(*i2);
			i2++;
		}
	}

	while(i1!=nums1.end())
	{
		merge.push_back(*i1++);
	}
        
	while(i2!=nums2.end())
	{
		merge.push_back(*i2++);
	}

	
	int n=merge.size();
	if(n%2)
	{
		return merge[n/2];
	}
	else return (merge[n/2-1]+merge[n/2])/2.0;
}

};