/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        //采用递归法
        if(head == null || head.next == null) return head;
        ListNode next = head.next;
        //采用递归说明递归之后的已经交换好了
        head.next = swapPairs(next.next);
        next.next = head;
        return next;
        
    }
}
