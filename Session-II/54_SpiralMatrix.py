class Solution(object):
    def spiralOrder(self, matrix):
        if not matrix or not matrix[0]:
            return []

        m, n = len(matrix), len(matrix[0])
        top, bottom, left, right = 0, m - 1, 0, n - 1
        path = []

        while top <= bottom and left <= right:
            for p in range(left, right + 1):
                path.append(matrix[top][p])
            top += 1

            for q in range(top, bottom + 1):
                path.append(matrix[q][right])
            right -= 1

            if top <= bottom:
                for r in range(right, left - 1, -1):
                    path.append(matrix[bottom][r])
                bottom -= 1

            if left <= right:
                for s in range(bottom, top - 1, -1):
                    path.append(matrix[s][left])
                left += 1

        return path

# Example usage
s = Solution()
matrix = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]]
print(s.spiralOrder(matrix))  # Output: [1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7]
