/*
�T���Φ���: ��������M�n�j��ĤT��
�Ҧp:�ܼ�a,b,c(a������̪���)
����:��u�䥭��M==�̪��䥭��M
�U��:��u�䥭��M>�̪��䥭��M
�w��:��u�䥭��M<�̪��䥭��M

***�Ѧҵ��G****
6 3 2
���~

6 3 4
�w��*/

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
if("c*c = a*a +b*b") {printf("�Y��");}
if("c*c > a*a +b*b") {printf("�w��");}
if("c*c < a*a +b*b") {printf("�U��");}

}



