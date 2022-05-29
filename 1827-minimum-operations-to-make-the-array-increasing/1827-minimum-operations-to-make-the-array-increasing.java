class Solution {
    public int minOperations(int[] nums) {
        if(nums.length==1){
            return 0 ;
        }
        
        int i = 1 ;
		int count = 0 ;
		while(i<nums.length) {
			if(nums[i-1]>=nums[i])
			{
			
				count = count + nums[i-1]-nums[i]+1 ; 
				nums[i] = nums[i-1] +1 ; 
			}
			i++ ;
		}
        return count;
    }
}