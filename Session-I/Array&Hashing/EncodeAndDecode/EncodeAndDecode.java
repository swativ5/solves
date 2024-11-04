package EncodeAndDecode;

import java.util.ArrayList;

public class EncodeAndDecode {
    String encode(String[] words)   {
        String encoded = "";
        for (String word:words) {
            encoded = encoded + "#" + word;
        }
        return encoded;
    }

    String[] decode(String encodedString) {
        ArrayList<String> words = new ArrayList<>();
        String word = "";
        for (int i = 0; i < encodedString.length(); i++)    {
            if(encodedString.charAt(i) == '#')  {
                words.add(word);
                word = "";
                continue;
            }
            word = word + encodedString.charAt(i);
        }
        if (!word.isEmpty()) {
            words.add(word);
        }
        String[] wordStrings = new String[words.size()];
        for(int i = 0; i < words.size(); i++)   {
            wordStrings[i] = words.get(i);
        }
        return wordStrings;
    }

    public static void main(String[] args) {
        EncodeAndDecode e = new EncodeAndDecode();
        String[] arr = {"neet","code","love","you"};
        String s = e.encode(arr);
        String[] arr2 = e.decode(s);
        for (String words: arr2)    {
            System.out.print(words + " ");
        }
    }
}
