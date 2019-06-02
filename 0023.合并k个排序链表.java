/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        /*
        List<Integer> arr = new ArrayList<>();
        //lists.length,没有括号
        for(int i = 0; i < lists.length; i++){
            ListNode node = lists[i];
            while(node != null){
                int val = node.val;
                arr.add(val);
                node = node.next;
            }
        }
        //要用size
        int size = arr.size();
        int[] data = new int[size];
        for(int i = 0; i < size; i++){
            data[i] = arr.get(i);
        }
        Arrays.sort(data);
        ListNode l1 = new ListNode(0);
        ListNode l2 = l1;
        for(int i = 0; i < size; i++){
            int temp = data[i];
            ListNode k = new ListNode(1);  //不加会出现空指针异常
            k.val = temp;
            l1.next = k;
            l1 = l1.next;
        }
        return l2.next;*/
         if (lists == null || lists.length == 0) return null;
        return merge(lists, 0, lists.length - 1);
    }

    private ListNode merge(ListNode[] lists, int l, int r) {
        if (l == r) return lists[l];
        int mid = (l + r) / 2;

        return mergeTwoLists(merge(lists, l, mid), merge(lists, mid + 1, r));
    }

    private ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if (l1 == null) return l2;
        if (l2 == null) return l1;

        if (l1.val < l2.val) {
            l1.next = mergeTwoLists(l1.next, l2);
            return l1;
        } else {
            l2.next = mergeTwoLists(l1, l2.next);
            return l2;
        }
    
    }
}
