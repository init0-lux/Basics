class Solution:
    def bulbs(self, A):
        cost = 0

        for b in A:
            if cost%2 == 0: b = b
            else: b = not b

            if b : continue
            else: cost += 1

        return cost

A = [1, 0, 1]
print(Solution.bulbs(A, A))
