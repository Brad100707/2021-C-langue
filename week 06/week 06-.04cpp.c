/*
三角形成立: 兩邊長的和要大於第三邊
例如:變數a,b,c(a為邊長最長邊)
直角:兩短邊平方和==最長邊平方和
銳角:兩短邊平方和>最長邊平方和
鈍角:兩短邊平方和<最長邊平方和

***參考結果****
6 3 2
錯誤

6 3 4
鈍角*/

#include <stdio.h>

int main() {

int a, b ,c ,temp;

scanf("%d%d%d", &a, &b, &c);

if(a>c) {

    temp = c;
    c = a;
	a = temp;
}

if(b>c) {

	temp = c;
	c = b;
	b =temp;
	}

	printf("c:%d", c);

if(c >= a+b) {printf("error");}
if("c*c = a*a +b*b") {printf("擲筊");}
if("c*c > a*a +b*b") {printf("鈍筊");}
if("c*c < a*a +b*b") {printf("銳筊");}

}



