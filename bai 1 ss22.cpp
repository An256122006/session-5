#include <stdio.h>
#include <string.h>
typedef struct Sinhvien{
	int id;
	char name[50];
	int age; 
}sinhvien; 
int main()
{
	int value;
	do 
	{
		printf ("=================menu====================\n");
		printf ("   1.In danh s�ch sinh vi�n\n");
		printf ("   2.Th�m sinh vi�n\n");
		printf ("   3.S?a th�ng tin sinh vi�n\n");
		printf ("   4.X�a sinh vi�n\n");
		printf ("   5.T?m ki?m sinh vi�n\n");
		printf ("   6.S?p x?p danh s�ch sinh vi�n\n");
		printf ("   7.thoat\n");
		printf ("=========================================\n");
		printf ("moi ban nhap lua chon:");
		scanf ("%d",&value);
		getchar(); 
	}while (1);
	return 0; 
} 
