piNum = 3.141592653589793 # عدد پی
npNum = 2.718281828459045 # عدد نپر

def power(a,b) :
    if b == 0 :
        return 1
    
    return a * power(a , b-1 )

def sqr(x,y=2) :
    i = 0
    while True :
        if x >= power(x,y) :
            return i
        i+=0.001
def fuctoriel (Number) :
    if Number == 1 :
        return 1
    
    return Number * fuctoriel(Number-1)

def sin(deg) :
    x = deg * 3.141592653589793 / 180.0
    result = 0 
    term = x
    sign = 1
    for i in range(1,15,2):
        result += sign *term 
        term = x * x /((i+1) * (i+2))
        sign = -sign
    return round(result,3)

def det2(A):
    C = A[0][0]*A[1][1]-A[0][1]*A[1][0]
    return C

def det3(A):
    C = A[0][0] * (A[1][1]*A[2][2] - A[1][2]*A[2][1]) - A[0][1] * (A[1][0]*A[2][2] - A[1][2]*A[2][0]) + A[0][2] * (A[1][0]*A[2][1] - A[1][1]*A[2][0])
    return C

def combination (n,r):
    return fuctoriel(n)/(fuctoriel(n-r) * fuctoriel(r))

def permutation(n,r):
    return fuctoriel(n)/fuctoriel(n-r)