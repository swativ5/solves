class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

public class MergeTwoLists {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode a = new ListNode();
        ListNode current = a;
        while (list1 != null && list2 != null)  {
            if (list1.val > list2.val)  {
                current.next = list2;
                list2 = list2.next;
            }   else    {
                current.next = list1;
                list1 = list1.next;
            }
            current = current.next;
        }
        if (list1 != null)  {
            current.next = list1;
        }   else    {
            current.next = list2;
        }

        return a.next;
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
        MergeTwoLists m = new MergeTwoLists();
        ListNode list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
        ListNode list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
        m.printList(list1);
        m.printList(list2);
        ListNode merged = m.mergeTwoLists(list1, list2);
        m.printList(merged);
    }
}
