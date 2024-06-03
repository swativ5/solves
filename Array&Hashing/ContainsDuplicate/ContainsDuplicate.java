package ContainsDuplicate;
/*
 * 217. Contains Duplicate
 * Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
 */

import java.util.HashSet;

public class ContainsDuplicate  {
    
    static boolean containsDuplicate(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
                if (set.contains(nums[i])) {
                    return true;
                }
                set.add(nums[i]);
        }
        return false;
    }

    public static void main(String args[])  {
        boolean b = containsDuplicate(new int[]{1,2,3,1});
        System.out.println(b);
    }
    
}
