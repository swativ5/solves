package TwoSum;

import java.util.HashMap;

public class TwoSum {
    public int[] twoSum(int[] nums, int target) {
        /*USING HASH TABLE */
        // target = (x) + (target - x)
        HashMap<Integer, Integer> map = new HashMap<>();    // x:index of x
        for(int i = 0; i < nums.length; i++)    {
            int k = target - nums[i];
            if(map.containsKey(k))  {
                return new int[]{i, map.get(k)};
            }
            map.put(nums[i], i);
        }
        return null;
    }

    public static void main(String[] args)  {
        TwoSum ts = new TwoSum();
        ts.twoSum(new int[]{-1,0,1}, -1);
    }

}
