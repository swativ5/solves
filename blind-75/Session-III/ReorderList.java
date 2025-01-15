
public class ReorderList {
    public void reorderList(ListNode head) {
        if (head == null)   {
            return;
        }

        // finding mid point
        ListNode slow = head, fast = head;
        while (fast != null && fast.next != null)   {
            slow = slow.next;
            fast = fast.next.next;
        }

        // partioning the first and second
        ListNode second = slow.next;
        slow.next = null;

        // in place reversal
        ListNode prev = null;
        while (second != null)  {
            ListNode next_node = second.next;
            second.next = prev;
            prev = second;
            second = next_node;
        }

        // merging two linked lists
        ListNode first = head;
        second = prev;
        ListNode x1 = first, x2 = second;

        while (second != null)  {
            x1 = x1.next;
            x2 = x2.next;
            first.next = second;
            second.next = x1;
            first = x1;
            second = x2;
        }
    }


    void printList(ListNode head) {
        ListNode current = head;
        while (current != null) {
            System.out.print(current.val + " -> ");
            current = current.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        ReorderList r = new ReorderList();
        ListNode head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
        // head = new ListNode(1);

        System.out.println("Original List:");
        r.printList(head);

        r.reorderList(head);

        System.out.println("Reordered List:");
        r.printList(head);
    }
}
