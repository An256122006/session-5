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
		printf ("   1.In danh sách sinh viên\n");
		printf ("   2.Thêm sinh viên\n");
		printf ("   3.S?a thông tin sinh viên\n");
		printf ("   4.Xóa sinh viên\n");
		printf ("   5.T?m ki?m sinh viên\n");
		printf ("   6.S?p x?p danh sách sinh viên\n");
		printf ("   7.thoat\n");
		printf ("=========================================\n");
		printf ("moi ban nhap lua chon:");
		scanf ("%d",&value);
		getchar(); 
	}while (1);
	return 0; 
} 
