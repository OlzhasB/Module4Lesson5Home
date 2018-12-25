#include<stdio.h> 
#include<locale.h> 
#include<iostream> 

void task1()
{

	int res, sport, sum, i;


	for (i = 1; i <= 2; i++)
	{
		sum = 0;
		for (sport = 1; sport <= 5; sport++)
		{
			res = 1 + rand() % 9;
			sum += res;
			printf("Grade number %d: %d\n", sport, res);
		}
		printf("Sum of grades of the %d sportsmen is %d\n", i, sum);
	}
	
	system("pause");
}

void task2()
{
	int gr, n = 15 + rand() % 15, cl, sum, i;
	float av;


	for (cl = 1; cl <= 2; cl++)
	{
		sum = 0;
		for (i = 1; i <= n; i++)
		{
			gr = 1 + rand() % 5;
			sum += gr;
			printf("Grade number %d: %d\n", i, gr);
		}
		av = float(sum) / float(n);
		printf("%d\n", sum);
		printf("Sum of grades of the %d class is %f\n", cl, av);
	}

	system("pause");
}




void task3()

{
	int people, area, region, sumP = 0, sumA = 0;
	float density;

	for (region = 1; region <= 12; region++)
	{
		people = 100 + rand() % 300;
		area = 20 + rand() % 40;
		printf("In the %d region %d000 people and area is %d000 km^2\n", region, people, area);

		sumP = people + sumP;
		sumA = area + sumA;
	}
	
	density = float(sumP) / float(sumA);
	printf("The total area is %d000\n", sumA);
	printf("The total amount of people is %d000\n", sumP);
	printf("The total density is %f\n", density);

	system("pause");
}


void task4()
{
	/*4.	В спортзал ежедневно приходит какое-то количество посетителей. Необходимо предложить пользователю ввести такие данные: сколько человек посетило спортзал за день, 
	ввести возраст каждого посетителя и в итоге показать возраст самого старшего и самого молодого из них, а так же посчитать средний возраст посетителей.*/
	setlocale(LC_ALL, "");
	int n, people = 15 + rand() % 5, age, sum = 0, age1 = 16, age2 = 40;
	float average;


	for (n = 1; n <= people; n++)
	{
		age = 15 + rand() % 5;

		if (age1 < age)
		{
			age1 = age;
		}

		if (age2 > age)
		{
			age2 = age;
		}

		sum = sum + age;
		printf("%d\n", age);

	}

	printf("The min age is %d\n", age2);
	printf("The max age is %d\n", age1);

	printf("The sum of the ages is %d\n", sum);

	average = float(sum) / float(age);
	printf("The average age is %f\n", average);
	
	system("pause");
}


void task5()
{
	/*5. 5.	На складе имеется определённое количество ящиков с яблоками (в нашем примере 15). Когда подъезжает машина для погрузки, попросить пользователя ввести, 
	сколько ящиков загрузить в первую машину, во вторую 
	и так далее, пока не закончатся ящики с яблоками. Предусмотреть тот случай, когда пользователь введёт количество ящиков больше, чем есть на складе.*/

	int n = 15, i = 0, m;

	do
	{
		i++;

	start:
		printf("There are %d boxes\n", n);
		printf("How many boxes you want to load in the %d car: ", i);
		scanf_s("%d", &m);
		n = n - m;
		
		if (n < 0)
		{
			printf("You cannot load this amount of boxes\n");
			goto start;
		}


	} while (n > 0);

	printf("All boxes are loaded\n");

	system("pause");
}



int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("Введите номер задания: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		
	}break;
	case 2:
	{
		task2();

		
	}break;
	case 3:
	{
		task3();

		
	}break;
	case 4:
	{
		task4();
	}
	case 5:
	{
		task5();

		
	}break;
	}

	printf("Хотите продолжить 1 или 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}