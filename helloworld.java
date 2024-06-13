import java.util.HashMap;
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

class helloworld    {
    public static void main(String args[])  {
        String s = "0123456789";
        String k = s.substring(0,10);
        System.out.println(k.equals(s));
        System.out.println(s.substring(0, 9));




        String m[] = s.split("");
        for(String i : m)   {
            //System.out.println(i);
        }
        //System.out.println(k);
    }
}