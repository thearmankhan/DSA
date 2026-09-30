
class Solution {
    int firstOcc(vector<int>& nums, int target){
    int l=0,h=nums.size()-1;
    int mid = l+(h-l)/2;
    int ans=-1;
    while (l<=h)
    {
        if(nums[mid]==target) 
        {
            h=mid-1;
            ans=mid;
        }
        else if(nums[mid]>target)  h=mid-1;
        else l=mid+1;
        mid = l+(h-l)/2;
    }
   return ans; 
}
int lastOcc(vector<int>& nums, int target){
    int l=0,h=nums.size()-1;
    int mid = l+(h-l)/2;
    int ans=-1;
    while (l<=h)
    {
        if(nums[mid]==target) 
        {
            ans=mid;
            l=mid+1;
        }
        else if(nums[mid]>target)  h=mid-1;
        else l=mid+1;
        mid = l+(h-l)/2;
    }
   return ans; 
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstOcc(nums,target);
        int last=lastOcc(nums,target);
        return {first,last};
    }
};