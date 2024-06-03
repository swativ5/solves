/*
 * 2273. Find Resultant Array After Removing Anagrams
 * You are given a 0-indexed string array words, where words[i] consists of lowercase English letters.
In one operation, select any index i such that 0 < i < words.length and words[i - 1] and words[i] are anagrams, and delete words[i] from words. 
Keep performing this operation as long as you can select an index that satisfies the conditions.
Return words after performing all operations. It can be shown that selecting the indices for each operation in any arbitrary order will lead to the same result.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase using all the original letters exactly once. For example, "dacb" is an anagram of "abdc".
 */

package ValidAnagram;


import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

public class RemoveAnagrams {
    public static String sortString(String inputString)
    {
        char tempArray[] = inputString.toCharArray();
        Arrays.sort(tempArray);
        return new String(tempArray);
    }
    public List<String> removeAnagrams(String[] words) {
        // brute force
        /*
        HashMap<String,String> set = new HashMap<>();   //sorted : original
        for (String i : words)  {
            set.putIfAbsent(sortString(i), i);
        }
        ArrayList<String> list = new ArrayList<>();
        for(String s : set.values())    {
            list.add(s);
        }
        return list;
        

        ArrayList<String> list = new ArrayList<>();
        HashSet<String> set = new HashSet<>();
        for(String i : words)   {
            String s = sortString(i);
            if (!(set.contains(s))) {
                list.add(i);
            }
            set.add(s);
        }
        */

        ArrayList<String> list = new ArrayList<>();
        String temp = "";
        for (String i : words)  {
            String s = sortString(i);
            if (!(temp.equals(s)))  {
                list.add(i);
                temp = s;
            }
        }
        return list;
    }
    public static void main(String[] args) {
        String words[] = {"abba","baba","bbaa","cd","cd"};
        RemoveAnagrams r = new RemoveAnagrams();
        List<String> s = r.removeAnagrams(words);
        System.out.println(s);
        String words1[] = {"a","b","c","d","e","a"};
        List<String> s1 = r.removeAnagrams(words1);
        System.out.println(s1);

    }
}
