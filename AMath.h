// عداد ثابت در ریاضی و بعضی تعریفات

float piNum = 3.141592653589793; // عدد پی

float NpNum = 2.718281828459045; //عدد نپر
//////

//Math Part
//1
int power(int a,int b)
{
    if (b==0)
    {
        return 1;
    }
    else
    {
        return a*power(a,b-1);
    }
}
//2
float sqr(int x , int y=2)
{
    for (double i = 0;  ; i+=0.001)
    {
        if ((power(i*100,y)/10000)>= x)
        {
           return i;
        }
    }
    
}
//3
int fuctoriel(int n)
{
    if (n==1)
    {
        return 1;
    }
    else{
        return n*fuctoriel(n-1);
    }
}
//4
int sum2(int a,int b)
{
    return a+b;
}
//5
int sum3(int a,int b,int c)
{
    return a+b+c;
}
//6
int sum4(int a,int b,int c,int d)
{
    return a+b+c+d;
}
//7
int SumArrey(int Numbers[])
{
    long int FullNumber;
    for (int i = 0; Numbers[i+1]!='\0'; i++)
    {
        FullNumber=FullNumber+Numbers[i];
    }
    return FullNumber;
}
//8
float powerF(float base, float exp) {
    if (exp == 0.0f) return 1.0f;
    
    float result = 1.0f;
    // فقط integer part (برای سادگی؛ fractional رو تقریبی)
    int int_exp = static_cast<int>(exp);
    float frac_exp = exp - int_exp;
    
    // integer power با loop
    for (int i = 0; i < int_exp; ++i) {
        result *= base;
    }
    
    // fractional تقریبی (با Taylor: base^frac ≈ 1 + frac * ln(base)، اما ln نیاز داره)
    // ساده: برای demo، از ۱ + frac * (base-1) استفاده کن (خطی، نادقیق برای frac بزرگ)
    result *= (1.0f + frac_exp * (base - 1.0f));  // تقریبی
    
    return result;
}
//9
double abs(double x) {
    return x < 0 ? -x : x;
}
//10
float Log(float n) {
    if (n <= 0.0f) {
        return 0.0f;
    }
    if (n == 1.0f) return 0.0f;
    
    float low = -100000.0f;  // برای n<1
    float high = 100000.0f;
    float precision = 1e-6f;
    while (abs(high - low) > precision) {
        float mid = (low + high) / 2.0f;
        float pow_mid = powerF(10.0f, mid);
        if (pow_mid < n) {
            low = mid;
        } else {
            high = mid;
        }
    }
    return (low + high) / 2.0f;
}
//11
float sin(int deg)
{
    double x = deg * 3.141592653589793 /(double) 180.0; // تبدیل به رادیان
    double result = 0, term = x;
    int sign = 1;

    for(int i = 1; i <= 15; i += 2) {
        result += sign * term;
        term *= x * x / ((i + 1) * (i + 2));
        sign = -sign;
    }
    return result;
}
//12
double cos(int deg)
{
    double x = deg * 3.141592653589793 /(double) 180.0; // تبدیل به رادیان
    double result=1;
    double term = 1;
    for(int i=1 ; i<=5 ; i ++)
    {
        term *= (-1) * x * x / ((2*i - 1) * (2*i));
        result += term;
    }
    return result;
}
//13
double tan(int deg)
{
    double result = sin(deg)/cos(deg);
    return result;
}

float triangle(int x, int y)
{
    float z = sqr(power(x,2)+power(y,2));
    return z;
}
//14
float sinS(int x , int y , int z)
{
    return y/(float)z;
}
//15
float cosS(int x , int y , int z)
{
    return y/(float)z;
}
//16
float tanS(int x , int y , int z)
{
    return y/(float)z;
}
//17
int arcsin(float x)
{
    for (int i = 0;; i++)
    {
        if (sin(i)>= x)
        {
            return i ;
        }
    }
}
//18
int arccos(float x)
{
    for (int i = 0;; i++)
    {
        if (cos(i)<= x)
        {
            return i ;
        }
    }
}
//19
float speed(float distanse,float time)
{
    float speed = distanse / time ;
    return speed;
}
//20
float vrite(float distanse,float time)
{
    float speed = distanse / time ;
    return speed;
}
//21
int det2(int A[2][2])
{
    long int C =( A[0][0]*A[1][1]) - (A[0][1]*A[1][0]);
    return C;
}
//22
int det3(int A[3][3])
{
    int C = A[0][0] * (A[1][1]*A[2][2] - A[1][2]*A[2][1]) -
            A[0][1] * (A[1][0]*A[2][2] - A[1][2]*A[2][0]) +
            A[0][2] * (A[1][0]*A[2][1] - A[1][1]*A[2][0]);
        return C;
}
    
//23 , 24 the permutation and comination

//23
float combination(int n ,int r)
{
    return fuctoriel(n)/(float)(fuctoriel(n-r) * fuctoriel(r));
}

//24
float permutation(int n ,int r)
{
    return fuctoriel(n)/(float)fuctoriel(n-r);
}