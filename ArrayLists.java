import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
class ArrayLists{
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        Queue<Integer> que =new LinkedList<>();
        list.add(0);
        list.add(2);
        list.add(3);
        System.out.println(list);
        list.remove(2);
        list.add(1,3);
        System.out.println(list);
        que.add(12);
        que.add(11);
        que.add(10);
        System.out.println(que);
        que.peek();
        que.poll();
        que.remove();
        System.out.println(que);
    }
}