/*
 * 219. Contains Duplicate II
 * Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
 */
import java.util.HashMap;

public class ContainsDuplicateII {
    static boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer,Integer> hashMap = new HashMap<>(); // num[i] : i
        int  indexi = 0, indexj = 0;
        for(int i = 0; i < nums.length; i++)   {
            if(hashMap.containsKey(nums[i]))   {
                indexi = i;
                indexj = hashMap.get(nums[i]);
                if(Math.abs(indexi - indexj) <= k)  {
                    return true;
                }
                else    {
                    hashMap.remove(nums[i]);
                }
            }
            hashMap.put(nums[i],i);

        }

        return false;
    }
    public static void main(String args[])  {
        boolean b = containsNearbyDuplicate(new int[]{1,2,3,1,2,3},2);
        System.out.println(b);
    }
}
