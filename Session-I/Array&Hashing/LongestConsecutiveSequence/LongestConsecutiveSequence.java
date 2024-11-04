package LongestConsecutiveSequence;

import java.util.HashSet;

public class LongestConsecutiveSequence {
    public int longestConsecutive(int[] nums) {
        if (nums.length == 0)   {
            return 0;
        }   else if (nums.length == 1)   {
            return 1;
        }
        HashSet<Integer> set = new HashSet<>();
        for (int n:nums)    {
            set.add(n);
        }
        int result = 0;
        int current = 1;
        for (int n:set){
            if  (!set.contains(n+1))    {
                result = Math.max(result,current);
                current = 1;
                continue;
            }
            current++;
        };
        return result;
    }

    public static void main(String[] args) {
        LongestConsecutiveSequence l = new LongestConsecutiveSequence();
        int[] arr = {100,4,200,1,3,2,700};
        int[] arr2 = {0,3,7,2,5,8,4,6,0,1};
        System.out.println(l.longestConsecutive(arr));
        System.out.println(l.longestConsecutive(arr2));
    }
}
