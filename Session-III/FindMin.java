class FindMin {
    public int findMin(int[] nums) {
        int left = 0, right = nums.length - 1;
        int mid = (left + right) / 2;

        while (left < right)    {
            mid = (left + right) / 2;
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            }   else {
                right = mid;
            }
        }
        return nums[left];
    }

    public static void main(String[] args) {
        FindMin f = new FindMin();
        System.out.println("hi");
        int nums[] = {3,4,5,1,2};
        System.out.println(f.findMin(nums));
    }
}