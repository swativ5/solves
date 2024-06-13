/*
 * 242. Valid Anagram
 * Given two strings s and t, return true if t is an anagram of s, and false otherwise.
 * An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
 */

package ValidAnagram;

import java.util.HashMap;

public class ValidAnagram {
    static boolean isAnagram(String s, String t) {
        /* 
        int[] s1 = new int[256];
        int[] t1 = new int[256];
        if(s.length() != t.length())    {
            System.out.println("here");
            return false;
        }
        for (int i = 0; i < s.length(); i++)    {
            s1[(int) s.charAt(i)]++;
            t1[(int) t.charAt(i)]++;
        }
        for (int i = 0; i < 256; i++)   {
            if(s1[i] != t1[i])  {
                return false;
            }
        }
        return true;
        */
        if(s.length() != t.length())    {
            System.out.println("here");
            return false;
        }
        HashMap<Character,Integer> map1 = new HashMap<>();
        HashMap<Character,Integer> map2 = new HashMap<>();
        for (int i = 0; i < s.length(); i++)    {
            char c1 = s.charAt(i);
            char c2 = t.charAt(i);
            map1.put(c1, map1.getOrDefault(c1, 0) + 1);
            map2.put(c2, map2.getOrDefault(c2, 0) + 1);
        }
        return map1.equals(map2);
    }

    public static void main(String[] args) {
        System.out.println(isAnagram("aacc", "ccac"));
    }
}
