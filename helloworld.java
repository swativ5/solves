import java.util.HashMap;
class helloworld    {
    public static void main(String args[])  {
        String s = "hello";
        HashMap<Character,Integer> map1 = new HashMap<>();
        HashMap<Character,Integer> map2 = new HashMap<>();
        char c = 'a';
        map1.put(c, 1);
        System.out.println(map1);
        map1.put(c,map1.get(c) + 1);
        System.out.println(map1);
        System.out.println(map1.get(c));
        map2.put('a',2);
        System.out.println(map1.equals(map2));

    }
}