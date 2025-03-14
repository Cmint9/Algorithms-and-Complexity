# Algorithms-and-Complexity
This is my CSE331 class code share

# Homework6 
import heapq
import sys

class Solution:

    def __init__(self, graph):
        self.graph = graph

    def output_edges(self):
        ########### Output the node ids of the smallest weighted path ############
        # we can use Prim's algorithm
        w = len(self.graph)
        # store MST structure for parent array
        total = w * [-1]
        minimum = [float('inf')] * w
        #This array to store minimum edge weights
        # We can use a priority queue to start the MST
        minimum[0] = 0
        priority_que = [(0,0)]
        inMST = [False] * w
        while priority_que:
            weight, d = heapq.heappop(priority_que)
            # we have to delete or ignore the node if it's already included in MST
            if inMST[d]:
                continue
            inMST[d] = True
            for i in range(w):
                q = self.graph[d][i]
                # if q edge is working and q will be the minimum edge
                if q != -1 and not inMST[i] and q < minimum[i]:
                    minimum[i] = q
                    total[i]= d
                    heapq.heappush(priority_que,(minimum[i],i))



        return total
