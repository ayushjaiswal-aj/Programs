/*
	Problem Number: 24
	Problem category: Conditional Prblems
	Problem statement:
		24.**Take 3 points from user & check if they are on straight line or not?

 */

#include<stdio.h>
void checkColinearity(int n1,int n2,int n3,int m1,int m2,int m3){
	if(((n2-n1)/(m2-m1))==((n3-n2)/(m3-m2))){
		printf("points are collinear\n");
		}
	else{
		printf("points are not collinear\n");
		}
	}
void getCoordinates(){
	int x1,x2,x3,y1,y2,y3;
	printf("enter coorinate of first point \n");
	scanf("%d%d",&x1,&y1);
	printf("enter coorinate of second point \n");
	scanf("%d%d",&x2,&y2);	
	printf("enter coorinate of third point \n");
	scanf("%d%d",&x3,&y3);	
	checkColinearity(x1,x2,x3,y1,y2,y3);
	}
int main(){
	getCoordinates();
	}
	
