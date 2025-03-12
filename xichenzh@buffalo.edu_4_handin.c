class Solution:
    
    def __init__(self, listOfRallies):
        self.rallies = listOfRallies
    
    def getSchedule(self):
        list1 = []
        # We also give the intial list to store
        currentTime1 = 0
        # we give the intial time to solve that
        rally_sorted = sorted(enumerate(self.rallies),key = lambda x: x[1][1])
        #sorted the list by deadline,the second element will be tuple


        for id,(duration,time) in rally_sorted:
            if currentTime1 + duration> time:
                return []
            list1.append((id,currentTime1))
            currentTime1 += duration

        return list1





        ################# YOUR CODE GOES HERE ##################

