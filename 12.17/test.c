#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//    int n;
//    while (scanf("%d", &n) != -1) {
//        n = n + 1;
//        int i, j;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n - i; j++) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < n-1; i++) {
//            for (j = 0; j < i + 2; j++) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		int i, j;
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < 2 * n - 2 * i;j++)
//			{
//				printf(" ");
//			}
//			for (j = 0;j <= i;j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0;i < n - 1;i++)
//		{
//			for (j = 0;j < n - 1 + 2 * i;j++)
//			{
//				printf(" ");
//			}
//			for (j = 0;j < n - 1 - i;j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//int main() {
//
//    int n;
//    while (scanf("%d", &n) != -1)
//    {
//        int i, j;
//        for (i = 0;i < n;i++)
//        {
//            for (j = 0;j < n - i;j++)
//            {
//                printf("  ");
//            }
//            for (j = 0;j <= i;j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (i = 0;i < n + 1;i++)
//        {
//            for (j = 0;j < i;j++)
//            {
//                printf("  ");
//            }
//            for (j = 0;j < n + 1 - i;j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		
//			
//		
//			
//				int i, j;
//				for (i = 0;i < n;i++)
//				{
//					for (j = 0;j < i;j++)
//						бн
//				
//		int i, j;
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n;j++)
//			{
//				if (i + j < n - 1)
//				{
//					printf("  ");
//				}
//				else
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main() {
//    int n;
//    while (scanf("%d", &n) != -1)
//    {
//        int i, j;
//        for (i = 0;i < n;i++)
//        {
//            for (j = 0;j < i;j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for (j = 0;j < n - 1 - i;j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//       /* for (i = 0;i < n;i++)
//        {
//            for (j = 0;j < n - 1 - i;j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for (j = 0;j < i;j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }*/
//    }
//    return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		int i, j;
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n;j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		int i, j;
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n;j++)
//			{
//				if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		int i, j;
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n;j++)
//			{
//				if (i == j)
//				{
//					printf("* ");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("* ");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main() {
//
//    int n;
//    while (scanf("%d", &n) != -1)
//    {
//        int i, j;
//        for (i = 0;i < n;i++)
//        {
//            for (j = 0;j < n;j++)
//            {
//                if (i == 0 && j < n - 1 && j == 0 && i < n - 1)
//                {
//                    printf("*");
//                }
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		int i, j;
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n ;j++)
//			{
//				if (i == 0 || i == n - 1)
//				{
//					printf("* ");
//				}
//				else if (j == 0 || j == n - 1)
//				{
//					printf("* ");
//				}
//				else
//					printf("  ");
//			}
//			printf("\n");
//			
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		int i, j;
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n;j++)
//			{
//				if (i == j || j == 0 || i == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	double a, b, c, d, e, average;
//	scanf("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
//	average = (a + b + c + d + e) / 5.0;
//	printf("%.2lf", average);
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		switch (n)
//		{
//		case 200:printf("OK\n");break;
//		case 202:printf("Accepted\n");break;
//		case 400:printf("Bad Request\n");break;
//		case 403:printf("Forbidden\n");break;
//		case 404:printf("Not Found\n");break;
//		case 500:printf("Internal Server Error\n");break;
//		case 502:printf("Bad Gateway\n");break;
//		default: break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		int i, j;
//		for (i = 0;i < n;i++)
//		{/*
//		 
//			for (j = 0;j <= i;j++)
//			{
//				printf("%d ", i + 1);
//			}
//		printf("\n");*/
//			for (j = 0;j <= i;j++)
//			{
//				printf("%d ", j + 1);
//		}
//			printf("\n");
//		}
//	}
//	return 0;
//}
int main()
{
	int arr[7];
	int i;
	for (i = 0;i < 7;i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	int min = arr[6];
	for (i = 0;i < 6;i++)
	{
		if (arr[i+1]>max)
			max = arr[i+1];
		if (arr[i]<min)
			min = arr[i];
	}
	double average;
	int sum = 0;
	for (i = 0;i < 7;i++)
	{
		sum = sum + arr[i];
	}
	average = (sum - max - min) / 5.0;
	printf("%.2lf", average);

	return 0;
}