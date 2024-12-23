class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

public class ReverseList {
    ListNode reverseList(ListNode head) {
        if (head == null)   {
            return null;
        }
        ListNode nhead = new ListNode(head.val);
        ListNode temp;

        while (head.next != null)   {
            head = head.next;
            temp = new ListNode(head.val);
            temp.next = nhead;
            nhead = temp;
        }
        return nhead;
    }

    ListNode create_copy(ListNode head)  {
        if (head == null)   {
            return null;
        }
        ListNode nhead = new ListNode(head.val, null);
        ListNode temp;
        ListNode rhead = nhead;

        while (head.next != null)   {
            head = head.next;
            temp = new ListNode(head.val);
            nhead.next = temp;
            nhead = nhead.next;
        }
        return rhead;
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
        ReverseList r = new ReverseList();
        ListNode head = new ListNode(1, new ListNode(2, new ListNode(3)));

        System.out.println("Original List:");
        r.printList(head);

        ListNode nhead = r.create_copy(head);

        System.out.println("Copied List:");
        r.printList(nhead);
    }
}
