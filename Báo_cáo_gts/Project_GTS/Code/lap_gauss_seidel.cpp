#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
 
main()
{
   
    int n, vong , i, j;
    printf("Nhap cap cua ma tran: ");
    scanf("%d",&n);
    float a[n][n], b[n], x[n], y[n];
    
    //--------Nhap ma tran de bai-----------
    
    printf("\nNhap ma tran ve trai:\n");
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=n; j++)
        {
        	printf("Gia tri :(%d,%d)=",i,j);
        	scanf("%f",&a[i][j]);
        }
    }
    printf("Ma tran ve trai \n");
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			printf("%10.5f",a[i][j]);
		}
		printf("\n");
	}
   printf("\nNhap ve phai \n");
    for (i = 1; i <=n; i++)
    {
        printf("Gia tri :(%d)=",i);
        scanf("%f",&b[i]);
    }
    printf("Ma tran ve phai: \n");
	for (i=1;i<=n;i++)	
	{
		printf("%10.5f",b[i]);
	}
	printf("\n");
    
    //----Nhap gia tri ban dau x0, so vong lap. ----
    
    printf("\nNhap gia tri ban dau cua x:\n");
    for (i = 1; i <=n; i++)
    {
        printf("Gia tri :(%d)=",i);
        scanf("%f",&x[i]);
    }
    printf("\nNhap so vong lap ban muon:");
    scanf("%d",&vong);
    
    //-----------Qua trinh lap----------
    
    printf("\nGia tri sau cac vong lap:\n");
    while (vong > 0)
    {
        for (i = 1; i <=n; i++)
        {
            y[i] = (b[i] / a[i][i]);
            for (j =1; j <=n; j++)
            {
                if (j == i)
                    continue;
                y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];
            }
            printf("x%d = %12.8f    ", i, y[i]);
        }
        printf("\n");
        vong--;
    }
    getch();
}

