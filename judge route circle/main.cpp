class Solution(object):
    def judgeCircle(self, moves):
        
        
        """
        :type moves: str
        :rtype: bool
        """
        a=b= c= d=0
        for str1 in moves:
            if str1=="U":
                a+=1
            elif str1=="D":
                b+=1
            elif str1=="L":
                c+=1
            elif str1=="R":
                d+=1
        if a==b and c==d:
            return "True"
        else:
            return "False"
      

        

def stringToString(input):
    return input[1:-1].decode('string_escape')

def main():
    import sys
    def readlines():
        for line in sys.stdin:
            yield line.strip('\n')
    lines = readlines()
    while True:
        try:
            line = lines.next()
            moves = stringToString(line)
            
            ret = Solution().judgeCircle(moves)

            out = (ret)
            print out
        except StopIteration:
            break

if __name__ == '__main__':
    main()
    
    