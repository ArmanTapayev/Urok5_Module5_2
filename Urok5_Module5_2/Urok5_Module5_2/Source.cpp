#include<stdio.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include<iomanip>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	system("color 1A");

	int i, j, n;

	do
	{
		cout << "\nВ работе содержится 5 заданий." << endl;
		cout << "\nДля выхода наберите 0." << endl;
		cout << endl;
		cout << "\nВведите номер задания: ";
		cin >> n;

		switch (n)
		{

			case 1:
			{
				cout << "\nЗадание №1" << endl;

				/*1. Написать программу, которая в матрице чисел A(N,M)
				находит все элементы, превышающие по абсолютной величине 
				заданное число B. Подсчитать число таких элементов и 
				записать их в массив C. */

				int A[5][4], C[20] = { 0 }, B, count=0, k=0;
				const int w = 5;

				cout << "Введите число В в диапазоне (-200,200): ";
				cin >> B;

					cout << "\nИсходный массив:\n" << endl;

						for (i = 0; i < 5; i++)
						{
							for (j = 0; j < 4; j++)
							{
								A[i][j] = 300 - rand() % 500;
								cout << setw(w) << A[i][j];

									if (abs(A[i][j]) > B)
									{
										count++;
										C[k] = A[i][j];
										k++;
									}
								
							 }

						     cout << endl;

						}

					cout << endl;

					cout << "\n Массив с элементами, превышающими по абсолютной величине "
						 <<"заданное число B:\n" << endl;

						for (i = 0; i < k; i++)
						{
							cout << "C[" << i << "]=" << C[i] << "  ";
						}

						cout << "\nКоличество элементов в массиве: " << count<<endl;

					cout << endl;

				system("pause");
				system("cls");

			}
			break;

			case 2:
			{
				cout << "\nЗадание №2" << endl;

				/*2. Дана целочисленная матрица размера 8х5. Определить: 
						a.	сумму всех элементов второго столбца массива; 
						b.	сумму всех элементов 3-й строки массива. */

					int A[8][5], sum2=0, sum3=0;
					const int w = 4;

						cout << "\nИсходный массив:\n" << endl;

							for (i = 0; i < 8; i++)
							{
								for (j = 0; j < 5; j++)
								{
									A[i][j] = 1 + rand() % 10;
									cout << setw(w) << A[i][j];

									if (j == 1) sum2 += A[i][j];
									if (i == 2) sum3 += A[i][j];
								}

								cout << endl;

							}

						cout << endl;

						cout << "Сумма элементов второго столбца массива: " << sum2<<endl;
						cout << "Сумма элементов 3-й строки массива: " << sum3 << endl;

					cout << endl;

				system("pause");
				system("cls");
			}
			break;

			case 3:
			{
				cout << "\nЗадание №3" << endl;

				/*3. Дана целочисленная прямоугольная матрица размера M·N. 
				Сформировать одномерный массив, состоящий из элементов, 
				лежащих в интервале [1,10]. Найти произведение елементов 
				полученного одномерного массив*/

				int A[8][6], C[48] = { 0 }, milt=1, k = 0;
				const int w = 4;

				cout << "\nИсходный массив:\n" << endl;

					for (i = 0; i < 8; i++)
					{
						for (j = 0; j < 6; j++)
						{
							A[i][j] = 1 + rand() % 50;
							cout << setw(w) << A[i][j] << "  ";

								if ((A[i][j] >= 1) && (A[i][j] <= 10))
								{
									C[k] = A[i][j];
									milt *= C[k];
									k++;
								}
						}
						
						cout << endl;

					}

					cout << endl;

					for (i = 0; i < k; i++)
					{
						cout << "C[" << i << "]=" << C[i] << "  ";
					}

				cout << endl;
				cout << "Произведение элементов массива: " << milt << endl;
				cout << endl;

				system("pause");
				system("cls");

			}
			break;

		case 4:
		{
			cout << "\nЗадание №4" << endl;

			/*4. Дана целочисленная квадратная матрица. 
			Указать столбец (назвать его номер), где минимальное количество элементов,
			кратных сумме индексов*/

			int A[6][6], S[6] = { 0 }, count, a;
			int N = 6;
			const int w = 5;

				cout << "\nИсходный массив:\n" << endl;

					for (i = 0; i < N; i++)
					{
						count = 0;

							for (j = 0; j < N; j++)
							{
								A[i][j] = 100 + rand() % 100;
								cout << setw(w) <<i+j<<" = " << A[i][j];	
							}

						cout << endl;

					}

					for (j = 0; j < N; j++)
					{
						count = 0;

							for (i = 0; i < N; i++)
							{

								a = i + j;

									if (a > 0)
									{
										if (A[i][j] % a == 0)
										{
											count++;
											S[j] = count;
										}

									}

							}

					}

					cout << endl;

					cout << "Количество элементов в столбце, кратных сумме индексов: " << endl;

					int min = 100, mini;

						for (i = 0; i < N; i++)
						{
							cout << "S[" << i << "]=" << S[i] << "  ";
								if (S[i] < min)
								{
									min = S[i];
									mini = i;
								}
						}

						cout << "\nСтолбец с минимальным количеством элементов, кратных сумме индексов:" << endl;
						cout << "S[" << mini << "]=" << S[mini] << "  ";
		
				cout << endl;

			system("pause");
			system("cls");

		}
		break;

		case 5:
		{
			cout << "\nЗадание №5" << endl;

			/*5. Дана целочисленная квадратная матрица. 
			Найти сумму элементов матрицы, лежащих выше главной диагонали*/

			int A[5][5], sum=0;
			const int w = 4;

				cout << "\nИсходный массив:\n" << endl;

					for (i = 0; i < 5; i++)
					{
							for (j = 0; j < 5; j++)
							{
								A[i][j] = 1 + rand() % 10;
								cout << setw(w) << A[i][j];

									if (i < j) sum += A[i][j];

							}

						cout << endl;

					}

				cout << endl;
				cout << "Cумма элементов матрицы, лежащих выше главной диагонали: " << sum << endl;

			system("pause");
			system("cls");

		}
		break;

		}

	} while (n != 0);

	cout << endl;
	cout << "Спасибо!" << endl;
	cout << endl;

	system("pause");
}