package Array;

import java.util.HashMap;
import java.util.Map;

public class CountFrequencyOfElement {
    public static void main(String[] args) {
        int a[] = {10,5,10,15,10,5};

        efficient(a);//better than below approach it takes n time

        //this approach take n*n times because it takes 2 loops
        int c=1;
        boolean visited[] = new boolean[a.length];

        for (int i = 0; i < a.length; i++) {
            
            if (visited[i]==true) {
                continue;
            }

            c=1;
            for (int j = i+1; j < a.length; j++) {  
                if (a[i]==a[j]) {
                    visited[j]=true;
                    c++;
                }
            }

            System.out.println(a[i]+" occurs "+c+" times in array");
            
        }
    }

    static void efficient(int a[])
    {
        //Hashmap contains key-value pair in which we can easily update the frequency of an element if it is already present in the map, if it is not present in the map then insert it in the map with frequency as 1.   Video:https://www.youtube.com/watch?v=pzQvKGcze3A

        HashMap<Integer,Integer> map = new HashMap<>();

        for (int i = 0; i < a.length; i++) {
            if (map.containsKey(a[i])) {
                map.put(a[i], map.get(a[i])+1);
            }
            else{
                map.put(a[i], 1);
            }
        }
        
        for(Map.Entry<Integer,Integer> entry : map.entrySet() )
        {
            System.out.println(entry.getKey()+" occurs "+entry.getValue()+" times in array");
        }

        System.out.println();
    }
}
