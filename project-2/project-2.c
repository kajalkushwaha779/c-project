#include<stdio.h>
void main(){
	int score;
	char grade='A';
	printf("Enter a score from(0-100)=");
		scanf("%d",&score);
		if(score>100){
		printf("invaild number");	
		}
	else{
	
     (score>=90) ? 	grade='A':(score>=80) ?  grade='B' : (score>=70) ?  grade='C':(score>=60) ? grade='D':(score>=50) ? grade='F':grade;
		
		printf("The grade is %c \n",grade);
		
		switch(grade){
			case 'A':
				break;
				printf("excellent work\n");
					case 'B':
						break;
				printf("well done\n");
					break;	
				case 'C':
				printf("good job\n");
					break;	
				case 'D':
				printf("you are passed\n");
					break;
				case 'F':
				printf("sorry,you are failed\n");
					break;
				
		}
		if(grade!='F'){
			printf("congratulations! you are eligible for the next level");
		
		}
	        else{
	        	printf(" please try again next time");
			} 
		}
}