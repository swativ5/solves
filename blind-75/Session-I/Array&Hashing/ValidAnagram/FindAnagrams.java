/*
 * 438. Find All Anagrams in a String
 * Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.
 * An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
 */


package ValidAnagram;

import java.util.ArrayList;
import java.util.List;

public class FindAnagrams {
    public boolean compareArrays(int[] a, int[] b)
    {
        for (int i = 0; i < 26; i++)    {
            if  (a[i] != b[i])  {
                return false;
            }
        }
        return true;
    }

    public List<Integer> findAnagrams(String s, String p) {
        int ns = s.length();
        int np = p.length();
        List<Integer> list = new ArrayList<>();

        if (np > ns)    {
            System.out.println("length inequality");
            return list;
        }
        //making pHash
        int[] pHash = new int[26];
        for (int i = 0; i < np; i++)    {
            pHash[((int) p.charAt(i) - 'a')]++;
        }
        
        int[] sHash = new int[26];
        for (int i = 0; i < np; i++)    {
            sHash[((int) s.charAt(i) - 'a')]++;
        }

        for (int i = 0; i < ns - np; i++)   {
            if (compareArrays(pHash, sHash))    {
                list.add(i);
            }
            sHash[((int) s.charAt(i) - 'a')]--;
            sHash[((int) s.charAt(i + np) - 'a')]++;
        }
        
        if  (compareArrays(pHash, sHash))   {
            list.add(ns - np);
        }
        return list;
    }
    public static void main(String[] args) {
        FindAnagrams f = new FindAnagrams();
        String s = "abab";
        String p = "ab";
        System.out.println(f.findAnagrams(s, p));

    }
}
