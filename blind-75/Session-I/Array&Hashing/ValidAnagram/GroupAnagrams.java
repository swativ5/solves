/*
 * 49. Group Anagrams
 * Given an array of strings strs, group the anagrams together. You can return the answer in any order.
 * An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
 */
package ValidAnagram;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

public class GroupAnagrams {
    public static String sortString(String inputString)
    {
        char tempArray[] = inputString.toCharArray();
        Arrays.sort(tempArray);
        return new String(tempArray);
    }

    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String,List<String>> map = new HashMap<>();     //sorted : list
        for (String i : strs)   {
            String s = sortString(i);
            if(map.containsKey(s))  {
                map.get(s).add(i);
            }   else    {
                List<String> list = new ArrayList<>();
                list.add(i);
                map.put(s, list);            
            }
        }
        List<List<String>> rlist = new ArrayList<>();
        for (List<String> list : map.values())  {
            rlist.add(list);
        }
        return rlist;
    }

    public static void main(String[] args) {
        String words1[] = {"eat","tea","tan","ate","nat","bat"};
        String words2[] = {""};
        String words3[] = {"a"};
        GroupAnagrams g = new GroupAnagrams();
        g.groupAnagrams(words1);    
        g.groupAnagrams(words2);    
        g.groupAnagrams(words3);    

    }
}
