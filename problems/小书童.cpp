#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
using namespace std;
const int maxn=100000001;//万一数据超级大，还是开大点保险
int n,len;//n就是题目中给的n,移动的步数，len是字符串长度
char a[maxn];//字符串
int main()
{
    scanf("%d",&n);
    cin>>a;//输入
    len=strlen(a);//测长
    for(int i=0;i<len;i++)//开始循环，来找每个字符对应的密码
    {
        if(a[i]+n<='z') printf("%c",a[i]+n);//如果移动之后没有超过'z'，说明可以直接输出来
        else printf("%c",(a[i]+n)%122+96);//如果超出了'z'，就得掉头，从'a'开始数。
           //注释1： mod 122的意思是已经到达了'z'，掉头回来，取剩下的。122是'z'的ASCII码
           //注释2： +96的意思是从'a'开始加。96是'a'的ASCII码。
    }
}
