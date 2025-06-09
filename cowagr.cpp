

bool ispossible(vector<int> &stalls,int k,int mid)
{
	int cowcount=1;
	int lastpos=stalls[0];
	for(int i=0;i<stall.size();i++) {
		if(stall[i]tpos>=mid){
			cowcount++;
			if(cowcount==k)
			{
				return true;
			}
			lastpos=stall[i];
		}
	}
	return false;
}

int aggresivecows(vector<int> &stalls, int k)
{
	sort(stall.begin(),stall.end())
	int s=0;
	int maxi=-1;
	for(int i=0;i,stall.size();i++)
	{
		maxi=max(maxi,stalls[i]);
	}
	int e=maxi;
	int ans=-1;
	int mid=(s+e)/2;
	
	while(s<e)
	{
		if(ispossible,k,mid) {
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=(s+e)/2;
	}
	return ans;
}
