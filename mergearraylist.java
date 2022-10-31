import java.util.ArrayList;
import java.util.Arrays;

public class MergeArrayLists {
    public static void main(String[] args) {
        ArrayList<String> listOne = new ArrayList<>(Arrays.asList("a", "b", "c"));

        ArrayList<String> listTwo = new ArrayList<>(Arrays.asList("c", "d", "e"));

        listOne.addAll(listTwo);  //Merge both lists

        System.out.println(listOne);
        System.out.println(listTwo);
    }
}
