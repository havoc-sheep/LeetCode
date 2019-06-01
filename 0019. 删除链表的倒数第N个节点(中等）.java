/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    //双指针法
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head == null || n<0) return null;
        //判断是否到链表尾部
        ListNode pCur = head;
        //temp为要删除的元素的前一个
        ListNode temp = head;
        for(int i = 0; i < n; i++){
            if(pCur != null){
                pCur = pCur.next;
            }else{
                return null;
            } 
        }
        if(pCur== null){
            head = head.next;
            return head;
        }
        
        //为了得到被删除元素的前一个元素
        while(pCur.next != null){
            temp = temp.next;
            pCur = pCur.next;
        }
        
        temp.next = temp.next.next;
        
        return head;
            
    }
}
