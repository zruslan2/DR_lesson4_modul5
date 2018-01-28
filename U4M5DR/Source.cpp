#include <locale.h>
#include <math.h>
#include <vector>
#include <time.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

int menu();
void head(char mas[]);
void yellow();
void white();
void red();

using namespace std;
unsigned short int nz;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));

	int i,j;
	while (true)
	{
		menu();
		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	Дано целое число в двоичной системе счисления, т.е.последовательность цифр
				0 и 1. Составить программу перевода этого числа в восьмеричную систему
				счисления.*/
			head("1. Дано целое число в двоичной системе счисления, т.е. последовательность цифр  0 и 1. Составить программу перевода этого числа в восьмеричную систему счисления.");
			char dv[4][4];
			char v[8][4] = { { '0','0','0','\0' }, { '0','0','1','\0' },{ '0','1','0','\0' },{ '0','1','1','\0' },{ '1','0','0','\0' },{ '1','0','1','\0' },{ '1','1','0','\0' },{ '1','1','1','\0' } };
			int b; char bc;
			yellow();
			cout << " Число в двоичной системе счесления\n ";
			white();
			for (i = 0; i < 4; i++)
			{
				for (j = 0; j < 3; j++)
				{
					b = 0 + rand() % 2;
					bc = b + '0';
					dv[i][j] = bc;
					cout << dv[i][j] << "\t";
				}				
			}
			for (i = 0; i < 4; i++) dv[i][3] = '\0';
			cout << endl;
			yellow();
			cout << " Число в восмеричной системе счесления\n ";
			white();
			//int f = strcmp(s1, s2);
			for (i = 0; i < 4; i++)
			{
				for (j = 0; j < 8; j++)
				{
					int f = strcmp(dv[i], v[j]);
					if (f == 0)
					{
						cout << j;
					}
				}					
			}
			cout << "\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 2)
		{
			/*2.	Ввести два массива действительных чисел, состоящих из 7 и  9 элементов.
				Сформировать третий массив из упорядоченных по убыванию значений 
				обоих массивов.*/
			head("2. Ввести два массива действительных чисел, состоящих из 7 и  9 элементов. Сформировать третий массив из упорядоченных по убыванию значений обоих массивов.");
			float a[7], b[9], c[16];
			yellow();
			cout << " Первый массив\n ";
			white();
			for (i = 0; i < 7; i++)
			{
				a[i] = (1.26f + rand() % 20) / (1.26f + rand() % 20);
				cout.precision(2);
				cout << a[i] << "\t";
			}
			cout << endl;
			yellow();
			cout << " Второй массив\n ";
			white();
			for (i = 0; i < 9; i++)
			{
				b[i] = (1.26f + rand() % 20) / (1.26f + rand() % 20);
				cout.precision(2);
				cout << b[i] << "\t";
			}
			cout << endl;
			yellow();
			cout << " Отсортированный массив\n ";
			white();
			for (i = 0; i < 7; i++)
			{
				c[i] = a[i];				
			}
			for (i = 7; i < 16; i++)
			{
				c[i] = b[i - 7];				
			}
			float prom;
			for (i = 0; i < 16; i++) 
			{
				for (j = 0; j < 16 - 1; j++) 
				{
					if (c[j] < c[j + 1]) 
					{
						prom = c[j];
						c[j] = c[j + 1];
						c[j + 1] = prom;
					}
				}
			}
			for (i = 0; i < 16; i++)cout << c[i] << "\t";			
			cout << "\n\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 3)
		{
			/*3.	Ввести массив, в котором только два одинаковых элемента.Определить 
				их местоположение.*/
			head("3. Ввести массив, в котором только два одинаковых элемента. Определить их местоположение.");
			char mas[]="01234529";		
			int b, c;
			int a = strlen(mas);			
			for (i = 0; i <= a; i++)
			{
				for (j = 0; j <= a; j++)
				{
					if (i != j)
					{
						if (mas[i] == mas[j])
						{
							b = j; c = i;
						}
					}
				}
			}
			for (i = 0; i <= a; i++)
			{
				cout << mas[i] << "\t";
			}
			cout << endl;
			yellow();
			cout << "Местоположение одинаковых элементов массива: первый " << b << ", второй " << c << endl;
			white();
			cout << "\n\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 4)
		{
			/*4.	Задан целочисленный массив.Определить, образуют ли значения его элементов 
				геометрическую прогрессию.Если «да» – вывести знаменатель прогрессии, 
				если «нет» – ответ «не образуют».*/
			head("4. Задан целочисленный массив. Определить, образуют ли значения его элементов геометрическую прогрессию. Если «да» – вывести знаменатель прогрессии, если «нет» – ответ «не образуют».");
			int mas[5] = { 1,2,4,8,16 };
			int mas1[5] = { 1,3,9,27,81 };
			int mas2[5];
			for (i = 0; i < 5; i++)mas2[i] = 1 + rand() % 1000;
			yellow();
			cout << "Массив\n";
			white();
			for (i = 0; i < 5; i++)
			{
				cout << mas[i] << "\t";
			}
			cout << endl;
			int znam;
			int geom = 0;
			if (mas[4] % mas[3] == 0)
			{
				znam = mas[4] / mas[3];
			}
			else
			{
				geom = 0;
			}

			for (int i = 3; i > 0; i--)
			{
				if (mas[i] / znam == mas[i - 1])geom = 1;
				else
				{
					geom = 0;
					break;
				}
			}
			
			if (geom == 0)
			{
				red();
				cout << "Нет, массив не является геометрической прогрессией" << endl;	
			}
			else
			{
				yellow();
				cout << "Да, массив является геометрической прогрессией, со знаменателем " <<znam << endl;				
			}
			//___________
			yellow();
			cout << "Массив\n";
			white();
			for (i = 0; i < 5; i++)
			{
				cout << mas1[i] << "\t";
			}
			cout << endl;
			geom = 0;
			if (mas1[4] % mas1[3] == 0)
			{
				znam = mas1[4] / mas1[3];
			}
			else
			{
				geom = 0;
			}

			for (int i = 3; i > 0; i--)
			{
				if (mas1[i] / znam == mas1[i - 1])geom = 1;
				else
				{
					geom = 0;
					break;
				}
			}

			if (geom == 0)
			{
				red();
				cout << "Нет, массив не является геометрической прогрессией" << endl;
			}
			else
			{
				yellow();
				cout << "Да, массив является геометрической прогрессией, со знаменателем " << znam << endl;
			}
			//___________
			yellow();
			cout << "Массив\n";
			white();
			for (i = 0; i < 5; i++)
			{
				cout << mas2[i] << "\t";
			}
			cout << endl;
			geom = 0;
			if (mas2[4] % mas2[3] == 0)
			{
				znam = mas2[4] / mas2[3];
			}
			else
			{
				geom = 0;
			}

			for (int i = 3; i > 0; i--)
			{
				if (mas2[i] / znam == mas2[i - 1])geom = 1;
				else
				{
					geom = 0;
					break;
				}
			}

			if (geom == 0)
			{
				red();
				cout << "Нет, массив не является геометрической прогрессией" << endl;
			}
			else
			{
				yellow();
				cout << "Да, массив является геометрической прогрессией, со знаменателем " << znam << endl;
			}				
			white();
			cout << "\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 5)
		{
			/*5.	Отсортировать по убыванию элементов последнего столбца целочисленный 
				двухмерный массив 5×4*/
			head("5. Отсортировать по убыванию элементов последнего столбца целочисленный двухмерный массив 5x4.");
			int mas[5][4];
			yellow();
			cout << " Массив до сортировки\n";
			white();
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 4; j++)
				{
					mas[i][j] = 1 + rand() % 50;
					if (j != 3)
					{
						white();
						cout << mas[i][j] << "\t";
					}
					else
					{
						red();
						cout << mas[i][j] << "\t";
					}
				}
				cout << endl;
			}
			yellow();
			cout << " Массив после сортировки\n";

			float prom;
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5 - 1; j++)
				{
					if (mas[j][3] < mas[j+1][3])
					{
						for (int k = 0; k < 4; k++)
						{
							prom = mas[j][k];
							mas[j][k] = mas[j+1][k];
							mas[j+1][k] = prom;
						}						
					}
				}
			}
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 4; j++)
				{
					if (j != 3)
					{
						white();
						cout << mas[i][j] << "\t";
					}
					else
					{
						red();
						cout << mas[i][j] << "\t";
					}
				}
				cout << endl;
			}
			white();
			cout << "\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 6)
		{
			/*6.	В матрице А(3 - строки, 4 - столбца) поменять местами наименьшие элементы 
				в первой и третей строке.*/
			head("6. В матрице А(3-строки,4-столбца) поменять местами наименьшие элементы в первой и третей строке.");
			int A[3][4], naim1, naim3,naim_ind1,naim_ind3;
			yellow();
			cout << " Массив до замены\n";
			white();
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 4; j++)
				{
					A[i][j] = 1 + rand() % 50;
					cout << A[i][j] << "\t";			
				}
				cout << endl;
			}
			yellow();
			cout << " Массив после замены\n";
			white();
			naim1 = A[0][0];
			naim3 = A[2][0];
			for (i = 1; i < 4; i++)
			{
				if (A[0][i] < naim1)
				{
					naim1 = A[0][i];
					naim_ind1 = i;
				}
				if (A[2][i] < naim3)
				{
					naim3 = A[2][i];
					naim_ind3 = i;
				}
			}
			int prom;
			prom = A[0][naim_ind1];
			A[0][naim_ind1] = A[2][naim_ind3];
			A[2][naim_ind3] = prom;

			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 4; j++)
				{
					if ((i==0&&j==naim_ind1) || (i == 2 && j == naim_ind3))
					{
						red();
						cout << A[i][j] << "\t";
					}
					else
					{
						white();
						cout << A[i][j] << "\t";
					}					
				}
				cout << endl;
			}
			white();
			cout << "\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 7)
		{
			/*7.	Дан двухмерный массив 5×6.Определить среднее арифметическое каждого столбца, 
				определить максимум и минимум каждой строки.*/
			head("7. Дан двухмерный массив 5x6. Определить среднее арифметическое каждого столбца,  определить максимум и минимум каждой строки.");
			int mas[5][6], min, maks, sum;
			float sa;
			yellow();
			cout << " Массив 5*6\n";
			white();
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 6; j++)
				{
					mas[i][j] = 1 + rand() % 50;
					cout << mas[i][j] << "\t";
				}
				cout << endl;
			}
			yellow();
			cout << " Cреднее арифметическое\n";
			white();
			for (i = 0; i < 6; i++)
			{
				sum = 0;
				for (j = 0; j < 5; j++)
				{
					sum += mas[j][i];
				}
				sa = (float)sum / 5;
				cout << " " << i + 1 << " столбца = " << sa << endl;
			}
			yellow();
			cout << " Максимум\n";
			white();
			for (i = 0; i < 5; i++)
			{
				maks = mas[i][0];
				for (j = 1; j < 6; j++)
				{
					if (mas[i][j] > maks)maks = mas[i][j];
				}
				cout << " " << i + 1 << " строки = " << maks << endl;
			}
			yellow();
			cout << " Минимум\n";
			white();
			for (i = 0; i < 5; i++)
			{
				min = mas[i][0];
				for (j = 1; j < 6; j++)
				{
					if (mas[i][j] < min)min = mas[i][j];
				}
				cout << " " << i + 1 << " строки = " << min << endl;
			}
			cout << "\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 8)
		{
			/*8.	Дан двухмерный массив n×m элементов, найти количество четных и нечетных 
				чисел в массиве.*/
			head("8. Дан двухмерный массив nxm элементов, найти количество четных и нечетных чисел в массиве.");
			int mas[5][6], c_ch=0, c_nch=0;
			yellow();
			cout << " Массив 5*6\n";
			white();
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 6; j++)
				{
					mas[i][j] = 1 + rand() % 50;
					cout << mas[i][j] << "\t";
				}
				cout << endl;
			}
			yellow();
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 6; j++)
				{
					if (mas[i][j] % 2 == 0)c_ch++;
					else c_nch++;
				}				
			}
			cout << " Количество четных чисел в массиве - " << c_ch << endl;
			cout << " Количество нечетных чисел в массиве - " << c_nch << endl;
			white();
			cout << "\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 9)
		{
			/*9.	Дан двухмерный массив n×m элементов. Определить, сколько раз встречается 
				число 7 среди элементов массива.*/
			head("9. Дан двухмерный массив nxm элементов. Определить, сколько раз встречается число 7 среди элементов массива.");
			int mas[5][6], c_7 = 0;
			yellow();
			cout << " Массив 5*6\n";
			white();
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 6; j++)
				{
					mas[i][j] = 1 + rand() % 10;
					cout << mas[i][j] << "\t";
				}
				cout << endl;
			}
			yellow();
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 6; j++)
				{
					if (mas[i][j] == 7)c_7++;					
				}
			}
			if(c_7==0||c_7==1||c_7>4)
			    cout << " Число 7 встречается в массиве - " << c_7 << " раз"<< endl;
			else
				cout << " Число 7 встречается в массиве - " << c_7 << " раза" << endl;
			white();
			cout << "\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 10)
		{
			/*10.	Дан массив из n × m элементов.Найти индексы первого наименьшего  
				элемента массива*/
			head("10. Дан массив из nxm элементов. Найти индексы первого наименьшего элемента массива.");
			int mas[5][6], ind1=0,ind2=0,min;
			yellow();
			cout << " Массив 5*6\n";
			white();
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 6; j++)
				{
					mas[i][j] = 1 + rand() % 10;
					cout << mas[i][j] << "\t";
				}
				cout << endl;
			}
			yellow();
			min = mas[0][0];
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 6; j++)
				{
					if (mas[i][j] < min)
					{
						min = mas[i][j];
						ind1 = i;
						ind2 = j;
					}
				}
			}
			cout << " Индексы первого наименьшего элемента: [" << ind1 << "][" << ind2 << "]\n";
			white();
			cout << "\n  Вернутся в меню\n";
			getch();
		}
	}
}

int menu()
{
	system("cls");
	int code;
	cout << "Выберите задание\n";
	nz = 1;

	for (int i = 1; i <= 10; i++)
	{
		if (nz == i)
		{
			SetConsoleTextAttribute(hConsole, 14);
			cout << "-->Задание " << i << endl;
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 15);
			cout << "   Задание " << i << endl;
		}
	}
	cout << "   Выход\n";

	do
	{
		code = getch();
		system("cls");

		if (code == 80)
		{
			if (nz != 10)
			{
				nz++;
			}
			else
			{
				nz = 0;
			}
			cout << "Выберите задание\n";

			for (int i = 1; i <= 10; i++)
			{
				if (nz == i)
				{
					SetConsoleTextAttribute(hConsole, 14);
					cout << "-->Задание " << i << endl;
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 15);
					cout << "   Задание " << i << endl;
				}
			}
			if (nz == 0)
			{
				SetConsoleTextAttribute(hConsole, 14);
				cout << "-->Выход \n";
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 15);
				cout << "   Выход \n";
			}
			code = getch();
		}
		else if (code == 72)
		{
			if (nz != 0)
			{
				nz--;
			}
			else
			{
				nz = 10;
			}
			cout << "Выберите задание\n";

			for (int i = 1; i <= 10; i++)
			{
				if (nz == i)
				{
					SetConsoleTextAttribute(hConsole, 14);
					cout << "-->Задание " << i << endl;
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 15);
					cout << "   Задание " << i << endl;
				}
			}
			if (nz == 0)
			{
				SetConsoleTextAttribute(hConsole, 14);
				cout << "-->Выход\n";
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 15);
				cout << "   Выход\n";
			}
			code = getch();
		}
		else
		{
			if (code != 80 || code != 72 || code != 13)
			{
				continue;
			}
		}

	} while (code != 13);
	SetConsoleTextAttribute(hConsole, 15);
	return nz;
}

void head(char mas[])
{
	int len, third,s1_len,s2_len,s3_len,maks;
	len = strlen(mas);
	third = len / 3;
	s1_len = third;
	for (int i = s1_len; i < len; i++)
	{
		if (mas[s1_len] != ' ') s1_len++;	
		else break;
	}
	s2_len = third;
	for (int i = s1_len + s2_len; i < len; i++)
	{
		if (mas[s1_len + s2_len] != ' ') s2_len++;
		else break;
	}
	s3_len = len-(s1_len+s2_len);
	vector<char>str1(s1_len);
	vector<char>str2(s2_len);
	vector<char>str3(s3_len);
	for (int i = 0; i < s1_len; i++)
	{
		str1[i] = mas[i];		
	}
	for (int i = s1_len+1; i < s1_len+s2_len; i++)
	{
		str2[i-(s1_len+1)] = mas[i];		
	}
	for (int i = s1_len+s2_len+1; i < len; i++)
	{
		str3[i - (s1_len+s2_len + 1)] = mas[i];		
	}
	maks = s1_len;
	if (s2_len > maks)maks = s2_len;
	if (s3_len > maks)maks = s3_len;
	system("cls");
	SetConsoleTextAttribute(hConsole, 11);
	setlocale(LC_ALL, ".866");
	cout << " Ъ";
	for (int i = 0; i <= maks+1; i++)cout << "Д";
	cout << "ї\n";
	cout << " і "; setlocale(LC_ALL, ".1251");
	for(int i=0;i<s1_len;i++) cout << str1[i];
	if (s1_len < maks)
	{
		for (int i = 0; i < maks - s1_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " і\n";
	cout << " і "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s2_len; i++) cout << str2[i];
	if (s2_len < maks)
	{
		for (int i = 0; i < maks - s2_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " і\n";
	cout << " і "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s3_len; i++) cout << str3[i];
	if (s3_len < maks)
	{
		for (int i = 0; i < maks - s3_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " і\n";
	cout << " А";
	for (int i = 0; i <= maks + 1; i++)cout << "Д";
	cout << "Щ\n";
	SetConsoleTextAttribute(hConsole, 15);
	setlocale(LC_ALL, ".1251");
}

void yellow()
{
	SetConsoleTextAttribute(hConsole, 14);
}

void white()
{
	SetConsoleTextAttribute(hConsole, 15);
}

void red()
{
	SetConsoleTextAttribute(hConsole, 12);
}

