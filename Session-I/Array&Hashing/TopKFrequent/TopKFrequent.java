package TopKFrequent;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
public class TopKFrequent {
    @SuppressWarnings("unchecked")
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer,Integer> map = new HashMap<>();     //num:freq
        for (int num : nums) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        
        List<Integer>[] bucket = new List[nums.length + 1]; // maximum possible frequency is nums.length
        for (int num:map.keySet())  {
            int frequency = map.get(num);
            if (bucket[frequency] == null) {
                bucket[frequency] = new ArrayList<>();
            }
            bucket[frequency].add(num);
        }

    

        List<Integer> list = new ArrayList<>();
        for(int i = nums.length; i >= 0 && list.size() < k; i--)   {
            if (bucket[i] != null) {
                list.addAll(bucket[i]);
            }
        }

        int[] topKElements = new int[k];
        for (int i = 0; i < k; i++) {
            topKElements[i] = list.get(i); 
        }
        
        return topKElements;
    }
    
    public static void main(String[] args) {
        TopKFrequent t = new TopKFrequent();
        //int arr[] = {1,1,1,2,3,4,4,2,7};
        int arr[] = {1,1,1,2,2,3};
        t.topKFrequent(arr, 2);
    }
}
