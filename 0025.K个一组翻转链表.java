/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        if(head == null) return head;
        ListNode cur = head;
        ListNode pre = null;
        ListNode next = null;
        int count = 0;
        if(getLength(cur) >= k){
            while(cur != null && count < k){
                next = cur.next;
                cur.next = pre;
                pre = cur;
                cur = next;
                count++;
            }
            
            if(cur != null){
                // head 为链表翻转后的尾节点
                head.next = reverseKGroup(cur, k);
            }
            // pre为链表翻转后的头结点
            return pre;
        }
        return cur;
    }
    
    public static int getLength(ListNode head){
        //避免上面的也直接变成了最后一个，对象的引用
        ListNode node = head;
        int count = 0;
        while(node != null){
            count++;
            node = node.next;
        }
        return count;
    }
}
