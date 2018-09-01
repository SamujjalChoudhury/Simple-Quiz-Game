#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
int one();
int two();
int three();
int four();
int five();
int six();
int seven();
int eight();
int nine();
int ten();
int eleven();
int twelve();
int therteen();
int fourteen();
int fifteen();
int sixteen();
int seventeen();
int eighteen();
int nineteen();
int twenty();
int twentyone();
int twentytwo();
int twentythree();
int twentyfour();
int twentyfive();
int twentysix();
int twentyseven();
int twentyeight();
int twentynine();
int thirty();
int top();
int ans_one(int, int);
int ans_two(int, int);
int ans_three(int, int);
int ans_four(int, int);
int ans_five(int, int);
int ans_six(int, int);
int ans_seven(int, int);
int ans_eight(int, int);
int ans_nine(int, int);
int ans_ten(int, int);
int ans_eleven(int, int);
int ans_twelve(int, int);
int ans_therteen(int, int);
int ans_fourteen(int, int);
int ans_fifteen(int, int);
int ans_sixteen(int, int);
int ans_seventeen(int, int);
int ans_eighteen(int, int);
int ans_nineteen(int, int);
int ans_twenty(int, int);
int ans_twentyone(int, int);
int ans_twentytwo(int, int);
int ans_twentythree(int, int);
int ans_twentyfour(int, int);
int ans_twentyfive(int, int);
int ans_twentysix(int, int);
int ans_twentyseven(int, int);
int ans_twentyeight(int, int);
int ans_twentynine(int, int);
int ans_thirty(int, int);

int main()
{
	while(1){
		system("cls");
		//First page
		top();
		printf("\n\nWelcome to the simple quiz game\n_______________________________");
		printf("\n\n\n\nYour options :\n_______________\n\n===============\n_______________\n\n\t1.Start the quiz\n\t2.Exit\n");
		int fst;
		scanf("%d",&fst);
		if(fst>=2)
			break;
			
		//second page
		system("cls");
		top();
		char player[50],m;
		printf("\n\nWelcome to the simple quiz game\n_______________________________\n");
		printf("\n\n\nPlayer name : ");
		scanf("%s",&player);
		printf("\nReady (Y/N) : ");
		m=getche();
		if(m!='y' && m!='Y'){
			break;
		}
		//Third page
		//Random selection
	int i,j,a[10],temp,t,ran,ansr[10];
	t=time(NULL);
	srand(t);
	for(i=0;i<10;i++){
		temp=rand()%30+1;
		for(j=0;j<=i-1;j++){
			if(temp==a[j])
				break;
		}
		if(i==j)
			a[i]=temp;
		else
			i--;
		}
		for(i=0;i<10;i++){
			ran=a[i];
			system("cls");
			top();
			printf("\nQustion number : %d\n",i+1);
			switch(ran){
				case 1 : ansr[i]=one();
						break;
				case 2 : ansr[i]=two();
						break;
				case 3 : ansr[i]=three();
						break;
				case 4 : ansr[i]=four();
						break;
				case 5 : ansr[i]=five();
						break;
				case 6 : ansr[i]=six();
						break;
				case 7 : ansr[i]=seven();
						break;
				case 8 : ansr[i]=eight();
						break;
				case 9 : ansr[i]=nine();
						break;
				case 10 : ansr[i]=ten();
						break;
				case 11 : ansr[i]=eleven();
						break;
				case 12 : ansr[i]=twelve();
						break;
				case 13 : ansr[i]=therteen();
						break;
				case 14 : ansr[i]=fourteen();
						break;
				case 15 : ansr[i]=fifteen();
						break;
				case 16 : ansr[i]=sixteen();
						break;
				case 17 : ansr[i]=seventeen();
						break;
				case 18 : ansr[i]=eighteen();
						break;
				case 19 : ansr[i]=nineteen();
						break;
				case 20 : ansr[i]=twenty();
						break;
				case 21 : ansr[i]=twentyone();
						break;
				case 22 : ansr[i]=twentytwo();
						break;
				case 23 : ansr[i]=twentythree();
						break;
				case 24 : ansr[i]=twentyfour();
						break;
				case 25 : ansr[i]=twentyfive();
						break;
				case 26 : ansr[i]=twentysix();
						break;
				case 27 : ansr[i]=twentyseven();
						break;
				case 28 : ansr[i]=twentyeight();
						break;
				case 29 : ansr[i]=twentynine();
						break;
				case 30 : ansr[i]=thirty();
						break;		
			}
		}
		system("cls");
		//Last Page
		
		int score=0;
		for(i=0;i<10;i++){
			if(ansr[i]%10 == ansr[i]/10)
				score+=1;
		}
		top();
		printf("\n\nCongratulations %s. You have completed the quiz\n\n\n",player);
		printf("You have scored %d out of 10\n\n\n",score);
		printf("Here are your answers...\n\n\n");
		int sprts=0,gk=0,tech=0;
		for(i=0;i<10;i++){
			switch(a[i]){
				case 1 : temp=ans_one(ansr[i], i+1);
						gk=gk+temp;
						break;
				case 2 : temp=ans_two(ansr[i], i+1);
						sprts=sprts+temp;
						break;
				case 3 : temp=ans_three(ansr[i], i+1);
						tech=tech+temp;
						break;
				case 4 : temp=ans_four(ansr[i], i+1);
						gk=gk+temp;
						break;
				case 5 : temp=ans_five(ansr[i], i+1);
						sprts=sprts+temp;
						break;
				case 6 : temp=ans_six(ansr[i], i+1);
						tech=tech+temp;
						break;
				case 7 : temp=ans_seven(ansr[i], i+1);
						gk=gk+temp;
						break;
				case 8 : temp=ans_eight(ansr[i], i+1);
						sprts=sprts+temp;
						break;
				case 9 : temp=ans_nine(ansr[i], i+1);
						tech=tech+temp;
						break;
				case 10 : temp=ans_ten(ansr[i], i+1);
						gk=gk+temp;
						break;
				case 11 : temp=ans_eleven(ansr[i], i+1);
						sprts=sprts+temp;
						break;
				case 12 : temp=ans_twelve(ansr[i], i+1);
						tech=tech+temp;
						break;
				case 13 : temp=ans_therteen(ansr[i], i+1);
						gk=gk+temp;
						break;
				case 14 : temp=ans_fourteen(ansr[i], i+1);
						sprts=sprts+temp;
						break;
				case 15 : temp=ans_fifteen(ansr[i], i+1);
						tech=tech+temp;
						break;
				case 16 : temp=ans_sixteen(ansr[i], i+1);
						gk=gk+temp;
						break;
				case 17 : temp=ans_seventeen(ansr[i], i+1);
						sprts=sprts+temp;
						break;
				case 18 : temp=ans_eighteen(ansr[i], i+1);
						tech=tech+temp;
						break;
				case 19 : temp=ans_nineteen(ansr[i], i+1);
						gk=gk+temp;
						break;
				case 20 : temp=ans_twenty(ansr[i], i+1);
						sprts=sprts+temp;
						break;
				case 21 : temp=ans_twentyone(ansr[i], i+1);
						tech=tech+temp;
						break;
				case 22 : temp=ans_twentytwo(ansr[i], i+1);
						gk=gk+temp;
						break;
				case 23 : temp=ans_twentythree(ansr[i], i+1);
						sprts=sprts+temp;
						break;
				case 24 : temp=ans_twentyfour(ansr[i], i+1);
						tech=tech+temp;
						break;
				case 25 : temp=ans_twentyfive(ansr[i], i+1);
						gk=gk+temp;
						break;
				case 26 : temp=ans_twentysix(ansr[i], i+1);
						sprts=sprts+temp;
						break;
				case 27 : temp=ans_twentyseven(ansr[i], i+1);
						tech=tech+temp;
						break;
				case 28 : temp=ans_twentyeight(ansr[i], i+1);
						gk=gk+temp;
						break;
				case 29 : temp=ans_twentynine(ansr[i], i+1);
						sprts=sprts+temp;
						break;
				case 30 : temp=ans_thirty(ansr[i], i+1);
						tech=tech+temp;
						break;
			}
			getch();
		}
		printf("\nCategory wise marks :\n\n");
		printf("(General Knowledge) : (%d)\n(Sports) : (%d)\n(Technology) : (%d)\n\n\n\n",5*gk,5*sprts,5*tech);
		printf("Your final total score : %d out of 50\n\n",(gk+sprts+tech)*5);
		printf("Press any key to go to main menu...");
		getch();
		FILE *fp;
		fp=fopen("Scores.txt","a");
		fprintf(fp,"Player name : %s\nScore : %d out of 50\n",player,(gk+sprts+tech)*5);
		fprintf(fp, "===========================================================================================================================\n\n\n");
		fclose(fp);
	}
	system("cls");
	printf("Press any key to exit...\n\n");
	top();
	getch();
	return 0;
}



int one()
{
	//Serial no : GK 1.
	int ans,r,l;
	printf("\nQuestion Category : General Knowledge\n\n");
	printf("Question Test : For which of the following disciplines is Nobel Prize awarded?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Literature, Peace and Economics\n\t2.Physics and Chemistry\n\t3.Physiology or Medicine\n\t4.All of the above");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==4)
	r=44;
	else
	r=40+ans;
	return r;
}
int two()
{
	//Serial no : Spts 1.
	int ans,r,l;
	printf("\nQuestion Category : Sports\n\n");
	printf("Question Test : For the Olympics and World Tournaments, the dimensions of basketball court are\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1. 27 m x 16 m\n\t2. 28 m x 15 m\n\t3. 26 m x 14 m\n\t4. 28 m x 16 m");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==2)
	r=22;
	else
	r=20+ans;
	return r;
}
int three()
{
	//Serial no : Tech 1.
	int ans,r,l;
	printf("\nQuestion Category : Technology\n\n");
	printf("Question Test : What is part of a database that holds only one type of information?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Report\n\t2.Field\n\t3.Record\n\t4.File");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==2)
	r=22;
	else
	r=20+ans;
	return r;
}
int four()
{
	//Serial no : GK 2.
	int ans,r,l;
	printf("\nQuestion Category : General Knowledge\n\n");
	printf("Question Test : Grand Central Terminal, Park Avenue, New York is the world's\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.highest railway station\n\t2.longest railway station\n\t3.largest railway station\n\t4.None of the above");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==3)
	r=33;
	else
	r=30+ans;
	return r;
}
int five()
{
	//Serial no : Spts 2.
	int ans,r,l;
	printf("\nQuestion Category : Sports\n\n");
	printf("Question Test : Which was the 1st non Test playing country to beat India in an international match?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Canada\n\t2.Sri Lanka\n\t3.Zimbabwe\n\t4.East Africa");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==2)
	r=22;
	else
	r=20+ans;
	return r;
}
int six()
{
	//Serial no : Tech 2.
	int ans,r,l;
	printf("\nQuestion Category : Technology\n\n");
	printf("Question Test : 'OS' computer abbreviation usually means ?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Order of Significance\n\t2.Open Software\n\t3.Operating System\n\t4.Optical Sensor");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==3)
	r=33;
	else
	r=30+ans;
	return r;
}
int seven()
{
	//Serial no : GK 3.
	int ans,r,l;
	printf("\nQuestion Category : General Knowledge\n\n");
	printf("Question Test : Garampani sanctuary is located at\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Gangtok, Sikkim\n\t2.Kohima, Nagaland\n\t3.Diphu, Assam\n\t4.Junagarh, Gujarat");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==3)
	r=33;
	else
	r=30+ans;
	return r;
}
int eight()
{
	//Serial no : Spts 3.
	int ans,r,l;
	printf("\nQuestion Category : Sports\n\n");
	printf("Question Test : Former Australian captain Mark Taylor has had several nicknames over his playing career. Which of the following was NOT one of them?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Tubby\n\t2.Stodge\n\t3.Helium Bat\n\t4.Stumpy");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==3)
	r=33;
	else
	r=30+ans;
	return r;
}
int nine()
{
	//Serial no : Tech 3.
	int ans,r,l;
	printf("\nQuestion Category : Technology\n\n");
	printf("Question Test : '.MOV' extension refers usually to what kind of file?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Image file\n\t2.Animation/movie file\n\t3.Audio file\n\t4.MS Office document");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==2)
	r=22;
	else
	r=20+ans;
	return r;
}
int ten()
{
	//Serial no : GK 4.
	int ans,r,l;
	printf("\nQuestion Category : General Knowledge\n\n");
	printf("Question Test : Hitler party which came into power in 1933 is known as\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Ku-Klux-Klan\n\t2.Democratic Party\n\t3.Labour Party\n\t4.Nazi Party");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==4)
	r=44;
	else
	r=40+ans;
	return r;
}
int eleven()
{
	//Serial no : Spts 4.
	int ans,r,l;
	printf("\nQuestion Category : Sports\n\n");
	printf("Question Test : Which county did Ravi Shastri play for?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Glamorgan\n\t2.Leicestershire\n\t3.Gloucestershire\n\t4.Lancashire");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==1)
	r=11;
	else
	r=10+ans;
	return r;
}
int twelve()
{
	//Serial no : Tech 4.
	int ans,r,l;
	printf("\nQuestion Category : Technology\n\n");
	printf("Question Test : In which decade with the first transatlantic radio broadcast occur?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1. 1850s\n\t2. 1860s\n\t3. 1870s\n\t4. 1900s");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==4)
	r=44;
	else
	r=40+ans;
	return r;
}
int therteen()
{
	//Serial no : GK 5.
	int ans,r,l;
	printf("\nQuestion Category : General Knowledge\n\n");
	printf("Question Test : FFC stands for\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Federation of Football Counci\n\t2.Film Finance Corporation\n\t3.Foreign Finance Corporation\n\t4.None of the above");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==2)
	r=22;
	else
	r=20+ans;
	return r;
}
int fourteen()
{
	//Serial no : Spts 5.
	int ans,r,l;
	printf("\nQuestion Category : Sports\n\n");
	printf("Question Test : Who was the first Indian to win the World Amateur Billiards title?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Geet Sethi\n\t2.Wilson Jones\n\t3.Michael Ferreira\n\t4.Manoj Kothari");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==2)
	r=22;
	else
	r=20+ans;
	return r;
}
int fifteen()
{
	//Serial no : Tech 5.
	int ans,r,l;
	printf("\nQuestion Category : Technology\n\n");
	printf("Question Test : Most modern TV's draw power even if turned off. The circuit the power is used in does what function?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Sound\n\t2.Remote control\n\t3.Color balance\n\t4.High voltage");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==2)
	r=22;
	else
	r=20+ans;
	return r;
}
int sixteen()
{
	//Serial no : GK 6.
	int ans,r,l;
	printf("\nQuestion Category : General Knowledge\n\n");
	printf("Question Test : First human heart transplant operation conducted by Dr. Christian Bernard on Louis Washkansky, was conducted in\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1. 1958\n\t2. 1922\n\t3. 1967\n\t4. 1968");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==3)
	r=33;
	else
	r=30+ans;
	return r;
}
int seventeen()
{
	//Serial no : Spts 6.
	int ans,r,l;
	printf("\nQuestion Category : Sports\n\n");
	printf("Question Test : Who was the first Indian to win the World Amateur Billiards title?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.M.L.Valsamma\n\t2.P.T.Usha\n\t3.Kamaljit Sandhu\n\t4.K.Malleshwari");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==3)
	r=33;
	else
	r=30+ans;
	return r;
}
int eighteen()
{
	//Serial no : Tech 6.
	int ans,r,l;
	printf("\nQuestion Category : Technology\n\n");
	printf("Question Test : The purpose of choke in tube light is ?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.To decrease the current\n\t2.To increase the current\n\t3.To decrease the voltage momentarily\n\t4.To increase the voltage momentarily");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==4)
	r=44;
	else
	r=40+ans;
	return r;
}
int nineteen()
{
	//Serial no : GK 7.
	int ans,r,l;
	printf("\nQuestion Category : General Knowledge\n\n");
	printf("Question Test : Galileo was an Italian astronomer who\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.developed the telescope\n\t2.discovered four satellites of Jupiter\n\t3.discovered that the movement of pendulum produces a regular time measurement\n\t4.All of the above");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==4)
	r=44;
	else
	r=40+ans;
	return r;
}
int twenty()
{
	//Serial no : Spts 7.
	int ans,r,l;
	printf("\nQuestion Category : Sports\n\n");
	printf("Question Test : Which two counties did Kapil Dev play?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Northamptonshire & Worcestershire\n\t2.Northamptonshire & Warwickshire\n\t3.Nottinghamshire & Worcestershire\n\t4.Nottinghamshire & Warwickshirei");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==1)
	r=11;
	else
	r=10+ans;
	return r;
}
int twentyone()
{
	//Serial no : Tech 7.
	int ans,r,l;
	printf("\nQuestion Category : Technology\n\n");
	printf("Question Test : '.MPG' extension refers usually to what kind of file?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.WordPerfect Document file\n\t2.MS Office document\n\t3.Animation/movie file\n\t4.Image file");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==3)
	r=33;
	else
	r=30+ans;
	return r;
}
int twentytwo()
{
	//Serial no : GK 8.
	int ans,r,l;
	printf("\nQuestion Category : General Knowledge\n\n");
	printf("Question Test : Exposure to sunlight helps a person improve his health because\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.resistance power increases\n\t2.the infrared light kills bacteria in the body\n\t3.the ultraviolet rays convert skin oil into Vitamin D\n\t4.the pigment cells in the skin get stimulated and produce a healthy tan");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==3)
	r=33;
	else
	r=30+ans;
	return r;
}
int twentythree()
{
	//Serial no : Spts 8.
	int ans,r,l;
	printf("\nQuestion Category : Sports\n\n");
	printf("Question Test : Ricky Ponting is also known as what?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.The Rickster\n\t2.Ponts\n\t3.Ponter\n\t4.Punter");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==4)
	r=44;
	else
	r=40+ans;
	return r;
}
int twentyfour()
{
	//Serial no : Tech 8.
	int ans,r,l;
	printf("\nQuestion Category : Technology\n\n");
	printf("Question Test : Who developed Yahoo?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Dennis Ritchie & Ken Thompson\n\t2.David Filo & Jerry Yang\n\t3.Vint Cerf & Robert Kahn\n\t4.Steve Case & Jeff Bezos");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==2)
	r=22;
	else
	r=20+ans;
	return r;
}
int twentyfive()
{
	//Serial no : GK 9.
	int ans,r,l;
	printf("\nQuestion Category : General Knowledge\n\n");
	printf("Question Test : First Afghan War took place in\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1. 1839\n\t2. 1848\n\t3. 1843\n\t4. 1833");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==1)
	r=11;
	else
	r=10+ans;
	return r;
}
int twentysix()
{
	//Serial no : Spts 9.
	int ans,r,l;
	printf("\nQuestion Category : Sports\n\n");
	printf("Question Test : How long are professional Golf Tour players allotted per shot?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1. 45 seconds\n\t2. 25 seconds\n\t3. 1 minute\n\t4. 2 minutes");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==1)
	r=11;
	else
	r=10+ans;
	return r;
}
int twentyseven()
{
	//Serial no : Tech 9.
	int ans,r,l;
	printf("\nQuestion Category : Technology\n\n");
	printf("Question Test : The most common format for a home video recorder is VHS. VHS stands for...?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Video Home System\n\t2.Very high speed\n\t3.Video horizontal standard\n\t4.Voltage house standard");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==1)
	r=11;
	else
	r=10+ans;
	return r;
}
int twentyeight()
{
	//Serial no : GK 10.
	int ans,r,l;
	printf("\nQuestion Category : General Knowledge\n\n");
	printf("Question Test : First China War was fought between\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.China and Egypt\n\t2.China and Greek\n\t3.China and Britain\n\t4.China and France");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==3)
	r=33;
	else
	r=30+ans;
	return r;
}
int twentynine()
{
	//Serial no : Spts 10.
	int ans,r,l;
	printf("\nQuestion Category : Sports\n\n");
	printf("Question Test : In the match between India and Pakistan at Jaipur on 02-10-1983, Which new rule was introduced?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1.Limit of overs was reduced to 50 overs\n\t2.The rule of field restriction was taken.\n\t3.Over throw runs were batsman's score\n\t4.No-balls & wides were debited to bowlers analysis");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==4)
	r=44;
	else
	r=40+ans;
	return r;
}
int thirty()
{
	//Serial no : Tech 10.
	int ans,r,l;
	printf("\nQuestion Category : Technology\n\n");
	printf("Question Test : What frequency range is the High Frequency band?\n\n\n");
	printf("Available Answers :\n\n");
	printf("\t1. 100 kHz\n\t2. 1 GHz\n\t3. 30 to 300 MHz\n\t4. 3 to 30 MHz");
	printf("\n\n\nMarks Allotted : 5");
	printf("\n\n\nEnter the correct answer : ");
	while(1){
		while(1){
			scanf("%d",&ans);
			if(ans>4 || ans<1)
			printf("\n\n\nWrong Choice. Please try again : ");
			else
			break;
		}
		printf("\n\nLock it(Y/N) : ");
		l=getche();
		if(l=='y' || l=='Y')
		break;
		else{
			printf("\n\n\nEnter the correct answer : ");
			continue;
		}
	}
	//Answer
	if(ans==4)
	r=44;
	else
	r=40+ans;
	return r;
}
top()
{
	printf("\n=====================================================================");
}
int ans_one(int ans, int no)
{
	printf("Question catagory : General Knowledge\n");
	printf("Question number (%d) : For which of the following disciplines is Nobel Prize awarded?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Literature, Peace and Economics\n");
				break;
		case 2 : printf("Correct answer : 2.Physics and Chemistry\n");
				break;
		case 3 : printf("Correct answer : 3.Physiology or Medicine\n");
				break;
		case 4 : printf("Correct answer : 4.All of the above\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Literature, Peace and Economics\n");
				break;
		case 2 : printf("Your answer : 2.Physics and Chemistry\n");
				break;
		case 3 : printf("Your answer : 3.Physiology or Medicine\n");
				break;
		case 4 : printf("Your answer : 4.All of the above\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_two(int ans, int no)
{
	
	printf("Question catagory : Sports\n");
	printf("Question number (%d) : For the Olympics and World Tournaments, the dimensions of basketball court are\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1. 27 m x 16 m\n");
				break;
		case 2 : printf("Correct answer : 2. 28 m x 15 m\n");
				break;
		case 3 : printf("Correct answer : 3. 26 m x 14 m\n");
				break;
		case 4 : printf("Correct answer : 4. 28 m x 16 m\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1. 27 m x 16 m\n");
				break;
		case 2 : printf("Your answer : 2. 28 m x 15 m\n");
				break;
		case 3 : printf("Your answer : 3. 26 m x 14 m\n");
				break;
		case 4 : printf("Your answer : 4. 28 m x 16 m\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_three(int ans, int no)
{
	printf("Question catagory : Technology\n");
	printf("Question number (%d) : What is part of a database that holds only one type of information?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Report\n");
				break;
		case 2 : printf("Correct answer : 2.Field\n");
				break;
		case 3 : printf("Correct answer : 3.Record\n");
				break;
		case 4 : printf("Correct answer : 4.File\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Report\n");
				break;
		case 2 : printf("Your answer : 2.Field\n");
				break;
		case 3 : printf("Your answer : 3.Record\n");
				break;
		case 4 : printf("Your answer : 4.File\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_four(int ans, int no)
{
	printf("Question catagory : General Knowledge\n");
	printf("Question number (%d) : Grand Central Terminal, Park Avenue, New York is the world's\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.highest railway station\n");
				break;
		case 2 : printf("Correct answer : 2.longest railway station\n");
				break;
		case 3 : printf("Correct answer : 3.largest railway station\n");
				break;
		case 4 : printf("Correct answer : 4.None of the above\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.highest railway station\n");
				break;
		case 2 : printf("Your answer : 2.longest railway station\n");
				break;
		case 3 : printf("Your answer : 3.largest railway station\n");
				break;
		case 4 : printf("Your answer : 4.None of the above\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_five(int ans, int no)
{
	printf("Question catagory : Sports\n");
	printf("Question number (%d) : Which was the 1st non Test playing country to beat India in an international match?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Canada\n");
				break;
		case 2 : printf("Correct answer : 2.Sri Lanka\n");
				break;
		case 3 : printf("Correct answer : 3.Zimbabwe\n");
				break;
		case 4 : printf("Correct answer : 4.East Africa\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Canada\n");
				break;
		case 2 : printf("Your answer : 2.Sri Lanka\n");
				break;
		case 3 : printf("Your answer : 3.Zimbabwe\n");
				break;
		case 4 : printf("Your answer : 4.East Africa\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_six(int ans, int no)
{
	printf("Question catagory : Technology\n");
	printf("Question number (%d) : 'OS' computer abbreviation usually means ?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Order of Significance\n");
				break;
		case 2 : printf("Correct answer : 2.Open Software\n");
				break;
		case 3 : printf("Correct answer : 3.Operating System\n");
				break;
		case 4 : printf("Correct answer : 4.Optical Sensor\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Order of Significance\n");
				break;
		case 2 : printf("Your answer : 2.Open Software\n");
				break;
		case 3 : printf("Your answer : 3.Operating System\n");
				break;
		case 4 : printf("Your answer : 4.Optical Sensor\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_seven(int ans, int no)
{
	printf("Question catagory : General Knowledge\n");
	printf("Question number (%d) : Garampani sanctuary is located at\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Gangtok, Sikkim\n");
				break;
		case 2 : printf("Correct answer : 2.Kohima, Nagaland\n");
				break;
		case 3 : printf("Correct answer : 3.Diphu, Assam\n");
				break;
		case 4 : printf("Correct answer : 4.Junagarh, Gujarat\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Gangtok, Sikkim\n");
				break;
		case 2 : printf("Your answer : 2.Kohima, Nagaland\n");
				break;
		case 3 : printf("Your answer : 3.Diphu, Assam\n");
				break;
		case 4 : printf("Your answer : 4.Junagarh, Gujarat\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_eight(int ans, int no)
{
	printf("Question catagory : Sports\n");
	printf("Question number (%d) : Former Australian captain Mark Taylor has had several nicknames over his playing career. Which of the following was NOT one of them?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Tubby\n");
				break;
		case 2 : printf("Correct answer : 2.Stodge\n");
				break;
		case 3 : printf("Correct answer : 3.Helium Bat\n");
				break;
		case 4 : printf("Correct answer : 4.Stumpy\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Tubby\n");
				break;
		case 2 : printf("Your answer : 2.Stodge\n");
				break;
		case 3 : printf("Your answer : 3.Helium Bat\n");
				break;
		case 4 : printf("Your answer : 4.Stumpy\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_nine(int ans, int no)
{
	printf("Question catagory : Technology\n");
	printf("Question number (%d) : '.MOV' extension refers usually to what kind of file?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Image file\n");
				break;
		case 2 : printf("Correct answer : 2.Animation/movie file\n");
				break;
		case 3 : printf("Correct answer : 3.Audio file\n");
				break;
		case 4 : printf("Correct answer : 4.MS Office document\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Image file\n");
				break;
		case 2 : printf("Your answer : 2.Animation/movie file\n");
				break;
		case 3 : printf("Your answer : 3.Audio file\n");
				break;
		case 4 : printf("Your answer : 4.MS Office document\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_ten(int ans, int no)
{
	printf("Question catagory : General Knowledge\n");
	printf("Question number (%d) : Hitler party which came into power in 1933 is known as\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Ku-Klux-Klan\n");
				break;
		case 2 : printf("Correct answer : 2.Democratic Party\n");
				break;
		case 3 : printf("Correct answer : 3.Labour Party\n");
				break;
		case 4 : printf("Correct answer : 4.Nazi Party\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Ku-Klux-Klan\n");
				break;
		case 2 : printf("Your answer : 2.Democratic Party\n");
				break;
		case 3 : printf("Your answer : 3.Labour Party\n");
				break;
		case 4 : printf("Your answer : 4.Nazi Party\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_eleven(int ans, int no)
{
	printf("Question catagory : Sports\n");
	printf("Question number (%d) : Which county did Ravi Shastri play for?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Glamorgan\n");
				break;
		case 2 : printf("Correct answer : 2.Leicestershire\n");
				break;
		case 3 : printf("Correct answer : 3.Gloucestershire\n");
				break;
		case 4 : printf("Correct answer : 4.Lancashire\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Glamorgan\n");
				break;
		case 2 : printf("Your answer : 2.Leicestershire\n");
				break;
		case 3 : printf("Your answer : 3.Gloucestershire\n");
				break;
		case 4 : printf("Your answer : 4.Lancashire\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_twelve(int ans, int no)
{
	printf("Question catagory : Technology\n");
	printf("Question number (%d) : In which decade with the first transatlantic radio broadcast occur?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1. 1850s\n");
				break;
		case 2 : printf("Correct answer : 2. 1860s\n");
				break;
		case 3 : printf("Correct answer : 3. 1870s\n");
				break;
		case 4 : printf("Correct answer : 4. 1900s\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1. 1850s\n");
				break;
		case 2 : printf("Your answer : 2. 1860s\n");
				break;
		case 3 : printf("Your answer : 3. 1870s\n");
				break;
		case 4 : printf("Your answer : 4. 1900s\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_therteen(int ans, int no)
{
	printf("Question catagory : General Knowledge\n");
	printf("Question number (%d) : FFC stands for\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Federation of Football Council\n");
				break;
		case 2 : printf("Correct answer : 2.Film Finance Corporation\n");
				break;
		case 3 : printf("Correct answer : 3.Foreign Finance Corporation\n");
				break;
		case 4 : printf("Correct answer : 4.None of the above\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Federation of Football Council\n");
				break;
		case 2 : printf("Your answer : 2.Film Finance Corporation\n");
				break;
		case 3 : printf("Your answer : 3.Foreign Finance Corporation\n");
				break;
		case 4 : printf("Your answer : 4.None of the above\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_fourteen(int ans, int no)
{
	printf("Question catagory : Sports\n");
	printf("Question number (%d) : Who was the first Indian to win the World Amateur Billiards title?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Geet Sethi\n");
				break;
		case 2 : printf("Correct answer : 2.Wilson Jones\n");
				break;
		case 3 : printf("Correct answer : 3.Michael Ferreira\n");
				break;
		case 4 : printf("Correct answer : 4.Manoj Kothari\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Geet Sethi\n");
				break;
		case 2 : printf("Your answer : 2.Wilson Jones\n");
				break;
		case 3 : printf("Your answer : 3.Michael Ferreira\n");
				break;
		case 4 : printf("Your answer : 4.Manoj Kothari\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_fifteen(int ans, int no)
{
	printf("Question catagory : Technology\n");
	printf("Question number (%d) : Most modern TV's draw power even if turned off. The circuit the power is used in does what function?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Sound\n");
				break;
		case 2 : printf("Correct answer : 2.Remote control\n");
				break;
		case 3 : printf("Correct answer : 3.Color balance\n");
				break;
		case 4 : printf("Correct answer : 4.High voltage\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Sound\n");
				break;
		case 2 : printf("Your answer : 2.Remote control\n");
				break;
		case 3 : printf("Your answer : 3.Color balance\n");
				break;
		case 4 : printf("Your answer : 4.High voltage\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_sixteen(int ans, int no)
{
	printf("Question catagory : General Knowledge\n");
	printf("Question number (%d) : First human heart transplant operation conducted by Dr. Christian Bernard on Louis Washkansky, was conducted in\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1. 1958\n");
				break;
		case 2 : printf("Correct answer : 2. 1922\n");
				break;
		case 3 : printf("Correct answer : 3. 1967\n");
				break;
		case 4 : printf("Correct answer : 4. 1968\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1. 1958\n");
				break;
		case 2 : printf("Your answer : 2. 1922\n");
				break;
		case 3 : printf("Your answer : 3. 1967\n");
				break;
		case 4 : printf("Your answer : 4. 1968\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_seventeen(int ans, int no)
{
	printf("Question catagory : Sports\n");
	printf("Question number (%d) : Who is the first Indian woman to win an Asian Games gold in 400m run?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1. M.L.Valsamma\n");
				break;
		case 2 : printf("Correct answer : 2. P.T.Usha\n");
				break;
		case 3 : printf("Correct answer : 3.Kamaljit Sandhu\n");
				break;
		case 4 : printf("Correct answer : 4. K.Malleshwari\n");
				break; 
	}
	switch(ans){
		case 1 : printf("Your answer : 1. M.L.Valsamma\n");
				break;
		case 2 : printf("Your answer : 2. P.T.Usha\n");
				break;
		case 3 : printf("Your answer : 3.Kamaljit Sandhu\n");
				break;
		case 4 : printf("Your answer : 4. K.Malleshwari\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_eighteen(int ans, int no)
{
	printf("Question catagory : Technology\n");
	printf("Question number (%d) : The purpose of choke in tube light is ?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.To decrease the current\n");
				break;
		case 2 : printf("Correct answer : 2.To increase the current\n");
				break;
		case 3 : printf("Correct answer : 3.To decrease the voltage momentarily\n");
				break;
		case 4 : printf("Correct answer : 4.To increase the voltage momentarily\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.To decrease the current\n");
				break;
		case 2 : printf("Your answer : 2.To increase the current\n");
				break;
		case 3 : printf("Your answer : 3.To decrease the voltage momentarily\n");
				break;
		case 4 : printf("Your answer : 4.To increase the voltage momentarily\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_nineteen(int ans, int no)
{
	printf("Question catagory : General Knowledge\n");
	printf("Question number (%d) : Galileo was an Italian astronomer who\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.developed the telescope\n");
				break;
		case 2 : printf("Correct answer : 2.discovered four satellites of Jupiter\n");
				break;
		case 3 : printf("Correct answer : 3.discovered that the movement of pendulum produces a regular time measurement\n");
				break;
		case 4 : printf("Correct answer : 4.All of the above\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.developed the telescope\n");
				break;
		case 2 : printf("Your answer : 2.discovered four satellites of Jupiter\n");
				break;
		case 3 : printf("Your answer : 3.discovered that the movement of pendulum produces a regular time measurement\n");
				break;
		case 4 : printf("Your answer : 4.All of the above\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_twenty(int ans, int no)
{
	printf("Question catagory : Sports\n");
	printf("Question number (%d) : Which two counties did Kapil Dev play?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Northamptonshire & Worcestershire\n");
				break;
		case 2 : printf("Correct answer : 2.Northamptonshire & Warwickshire\n");
				break;
		case 3 : printf("Correct answer : 3.Nottinghamshire & Worcestershire\n");
				break;
		case 4 : printf("Correct answer : 4.Nottinghamshire & Warwickshire\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Northamptonshire & Worcestershire\n");
				break;
		case 2 : printf("Your answer : 2.Northamptonshire & Warwickshire\n");
				break;
		case 3 : printf("Your answer : 3.Nottinghamshire & Worcestershire\n");
				break;
		case 4 : printf("Your answer : 4.Nottinghamshire & Warwickshire\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_twentyone(int ans, int no)
{
	printf("Question catagory : Technology\n");
	printf("Question number (%d) : '.MPG' extension refers usually to what kind of file?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.WordPerfect Document file\n");
				break;
		case 2 : printf("Correct answer : 2.MS Office document\n");
				break;
		case 3 : printf("Correct answer : 3.Animation/movie file\n");
				break;
		case 4 : printf("Correct answer : 4.Image file\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.WordPerfect Document file\n");
				break;
		case 2 : printf("Your answer : 2.MS Office document\n");
				break;
		case 3 : printf("Your answer : 3.Animation/movie file\n");
				break;
		case 4 : printf("Your answer : 4.Image file\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_twentytwo(int ans, int no)
{
	printf("Question catagory : General Knowledge\n");
	printf("Question number (%d) : Exposure to sunlight helps a person improve his health because\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.resistance power increases\n");
				break;
		case 2 : printf("Correct answer : 2.the infrared light kills bacteria in the body\n");
				break;
		case 3 : printf("Correct answer : 3.the ultraviolet rays convert skin oil into Vitamin D\n");
				break;
		case 4 : printf("Correct answer : 4.the pigment cells in the skin get stimulated and produce a healthy tan\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.resistance power increases\n");
				break;
		case 2 : printf("Your answer : 2.the infrared light kills bacteria in the body\n");
				break;
		case 3 : printf("Your answer : 3.the ultraviolet rays convert skin oil into Vitamin D\n");
				break;
		case 4 : printf("Your answer : 4.the pigment cells in the skin get stimulated and produce a healthy tan\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_twentythree(int ans, int no)
{
	printf("Question catagory : Sports\n");
	printf("Question number (%d) : Ricky Ponting is also known as what?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.The Rickster\n");
				break;
		case 2 : printf("Correct answer : 2.Ponts\n");
				break;
		case 3 : printf("Correct answer : 3.Ponter\n");
				break;
		case 4 : printf("Correct answer : 4.Punter\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.The Rickster\n");
				break;
		case 2 : printf("Your answer : 2.Ponts\n");
				break;
		case 3 : printf("Your answer : 3.Ponter\n");
				break;
		case 4 : printf("Your answer : 4.Punter\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_twentyfour(int ans, int no)
{
	printf("Question catagory : Technology\n");
	printf("Question number (%d) : Who developed Yahoo?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Dennis Ritchie & Ken Thompson\n");
				break;
		case 2 : printf("Correct answer : 2.David Filo & Jerry Yang\n");
				break;
		case 3 : printf("Correct answer : 3.Vint Cerf & Robert Kahn\n");
				break;
		case 4 : printf("Correct answer : 4.Steve Case & Jeff Bezos\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Dennis Ritchie & Ken Thompson\n");
				break;
		case 2 : printf("Your answer : 2.David Filo & Jerry Yang\n");
				break;
		case 3 : printf("Your answer : 3.Vint Cerf & Robert Kahn\n");
				break;
		case 4 : printf("Your answer : 4.Steve Case & Jeff Bezos\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_twentyfive(int ans, int no)
{
	printf("Question catagory : General Knowledge\n");
	printf("Question number (%d) : First Afghan War took place in\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1. 1839\n");
				break;
		case 2 : printf("Correct answer : 2. 1848\n");
				break;
		case 3 : printf("Correct answer : 3. 1843\n");
				break;
		case 4 : printf("Correct answer : 4. 1833\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1. 1839\n");
				break;
		case 2 : printf("Your answer : 2. 1848\n");
				break;
		case 3 : printf("Your answer : 3. 1843\n");
				break;
		case 4 : printf("Your answer : 4. 1833\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_twentysix(int ans, int no)
{
	printf("Question catagory : Sports\n");
	printf("Question number (%d) : How long are professional Golf Tour players allotted per shot?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1. 45 seconds\n");
				break;
		case 2 : printf("Correct answer : 2. 25 seconds\n");
				break;
		case 3 : printf("Correct answer : 3. 1 minute\n");
				break;
		case 4 : printf("Correct answer : 4. 2 minutes\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1. 45 seconds\n");
				break;
		case 2 : printf("Your answer : 2. 25 seconds\n");
				break;
		case 3 : printf("Your answer : 3. 1 minute\n");
				break;
		case 4 : printf("Your answer : 4. 2 minutes\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_twentyseven(int ans, int no)
{
	printf("Question catagory : Technology\n");
	printf("Question number (%d) : The most common format for a home video recorder is VHS. VHS stands for...?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Video Home System\n");
				break;
		case 2 : printf("Correct answer : 2.Very high speed\n");
				break;
		case 3 : printf("Correct answer : 3.Video horizontal standard\n");
				break;
		case 4 : printf("Correct answer : 4.Voltage house standard\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Video Home System\n");
				break;
		case 2 : printf("Your answer : 2.Very high speed\n");
				break;
		case 3 : printf("Your answer : 3.Video horizontal standard\n");
				break;
		case 4 : printf("Your answer : 4.Voltage house standard\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_twentyeight(int ans, int no)
{
	printf("Question catagory : General Knowledge\n");
	printf("Question number (%d) : First China War was fought between\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.China and Egypt\n");
				break;
		case 2 : printf("Correct answer : 2.China and Greek\n");
				break;
		case 3 : printf("Correct answer : 3.China and Britain\n");
				break;
		case 4 : printf("Correct answer : 4.China and France\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.China and Egypt\n");
				break;
		case 2 : printf("Your answer : 2.China and Greek\n");
				break;
		case 3 : printf("Your answer : 3.China and Britain\n");
				break;
		case 4 : printf("Your answer : 4.China and France\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_twentynine(int ans, int no)
{
	printf("Question catagory : Sports\n");
	printf("Question number (%d) : In the match between India and Pakistan at Jaipur on 02-10-1983, Which new rule was introduced?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1.Limit of overs was reduced to 50 overs\n");
				break;
		case 2 : printf("Correct answer : 2.The rule of field restriction was taken.\n");
				break;
		case 3 : printf("Correct answer : 3.Over throw runs were batsman's score\n");
				break;
		case 4 : printf("Correct answer : 4.No-balls & wides were debited to bowlers analysis\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1.Limit of overs was reduced to 50 overs\n");
				break;
		case 2 : printf("Your answer : 2.The rule of field restriction was taken.\n");
				break;
		case 3 : printf("Your answer : 3.Over throw runs were batsman's score\n");
				break;
		case 4 : printf("Your answer : 4.No-balls & wides were debited to bowlers analysis\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
int ans_thirty(int ans, int no)
{
	printf("Question catagory : Technology\n");
	printf("Question number (%d) : What frequency range is the High Frequency band?\n",no);
	int c;
	c=ans/10;
	ans=ans%10;
	switch(c){
		case 1 : printf("Correct answer : 1. 100 kHz\n");
				break;
		case 2 : printf("Correct answer : 2. 1 GHz\n");
				break;
		case 3 : printf("Correct answer : 3. 30 to 300 MHz\n");
				break;
		case 4 : printf("Correct answer : 4. 3 to 30 MHz\n");
				break;
	}
	switch(ans){
		case 1 : printf("Your answer : 1. 100 kHz\n");
				break;
		case 2 : printf("Your answer : 2. 1 GHz\n");
				break;
		case 3 : printf("Your answer : 3. 30 to 300 MHz\n");
				break;
		case 4 : printf("Your answer : 4. 3 to 30 MHz\n");
				break;
	}
	if(ans==c){
		printf("Awarded marks : 5\n\n\n\n");
		return 1;
	}
	else{
		printf("Awarded marks : 0\n\n\n\n");
		return 0;
	}
}
