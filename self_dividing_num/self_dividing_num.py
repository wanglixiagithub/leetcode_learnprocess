class Solution(object):
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        num = [];
        for i in range(left,right):
            left1=i
            n=1
            while (left1>0):
                
                a = left1%10
                if a== 0:
                    n=0
                    break
                b = i%a
                left1 = left1/10
                if b!=0:
                    n=0
                    break
                

            if n==1 : 
                num.append(i)
            
        return num
//主要是要设置一个变量left1用来放每一次迭代后变小的i，还有最开始我蠢在了把i写成了left，这样根本就调用不了i，傻啊。还有设置了一个类似于bool的布尔值，来标志是否有异常情况发生，其实这块可以设置为python的异常，我没有设置
            
                

                    
            
        

def stringToInt(input):
    return int(input)

def integerListToString(nums, len_of_list=None):
    if not len_of_list:
        len_of_list = len(nums)
    return json.dumps(nums[:len_of_list])

def main():
    import sys
    def readlines():
        for line in sys.stdin:
            yield line.strip('\n')
    lines = readlines()
    while True:
        try:
            line = lines.next()
            left = stringToInt(line)
            line = lines.next()
            right = stringToInt(line)
            
            ret = Solution().selfDividingNumbers(left, right)

            out = integerListToString(ret)
            print out
        except StopIteration:
            break

if __name__ == '__main__':
    main()