

#include <stdio.h>
#include <math.h>
void giaiPTBac2() {
	int a,b,c;
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo nghiem!");
        } else {
            printf("Phuong trinh co mot nghiem: x = %f", (-c / b));
        }
        return;
    }
    float delta = b*b - 4*a*c;
    float x1;
    float x2;
    if (delta > 0) {
        x1 = (float) ((-b + sqrt(delta)) / (2*a));
        x2 = (float) ((-b - sqrt(delta)) / (2*a));
        printf("Phuong trinh co 2 nghiem la: x1 = %f va x2 = %f", x1, x2);
    } else if (delta == 0) {
        x1 = (-b / (2 * a));
        printf("Phong trinh co nghiem kep: x1 = x2 = %f", x1);
    } else {
        printf("Phuong trinh vo nghiem!");
    }
}

int getUserChoice()
{   int choice;
	printf("\n 1. Quadratic equation     ");
	printf("\n 2. Fibonacci sequence.    ");
	printf("\n 3. Exit the program.      ");
	printf("\nEnter Your Choice: ");
	scanf("%d%*c", &choice);
	return choice;
}

void fibonacci() {
	int n, i; 
	printf("\nEnter a positive integral number: "); 
	do {
	scanf("%d", &n); 
	}
    while (n < 1);
    printf("\nThe first %d Fibonacci numbers: ", n);
    int t1 = 1, t2 = 1, f = 1;
    for (i = 0; i < n; i++) {
            f  = t1 + t2;
            t1 = t2;
            t2 = f;
            printf("%lld ", f);
	}
}

int main()
{   int userChoice;
    do
    {   userChoice = getUserChoice();
        switch(userChoice)
		{   
			case 1: giaiPTBac2();break;
			case 2: fibonacci();
		            break;
		    default: printf("\nGood Bye!");
	    }
	}
	while (userChoice<1 && userChoice>3);
	return 0;
}
