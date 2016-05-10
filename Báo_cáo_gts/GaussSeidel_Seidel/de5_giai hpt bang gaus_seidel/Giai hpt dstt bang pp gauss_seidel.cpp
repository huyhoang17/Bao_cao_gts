#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
 int main()
 
 { 
 	int n,i,j ,dem=0;
 	int traloi;
 	printf("Ban da doc huong dan .(0 khi chua doc hoac 1 khi da doc) ?\n");
	scanf("\t%d",&traloi);
	if(traloi==0) 
	{
		printf("\tThe end ^-^");
		getch();
		return 0;
	}
	
 	printf("Cho biet cap cua ma tran da nhap n=");
 	scanf("%d",&n);
 	float a[n][n], b[n], x[n], y[n],d,t,epsi;
 	
 
 	
 	// *********Lay du lieu tu file***************
 	// *****Lay he so ma tran vuong A*************
 	FILE *filein_A; 
 	filein_A=fopen("input_A.txt","r");
 	for ( i=0;i<n;i++)
 		for(j=0;j<n;j++)
 	{
 		fscanf(filein_A,"%f",&a[i][j]);
 	}
 	fclose(filein_A); 
 	//*******Lay he so ma tran B*********
 	FILE *filein_B; 
 	filein_B=fopen("input_B.txt","r");
 	for (i=0;i<n;i++)
 	{
 		fscanf(filein_B,"%f",&b[i]);
 	}
 	fclose(filein_B); 
 	//******Lay gia tri ban dau x
 	FILE *filein_x0; 
 	filein_x0=fopen("input_x0.txt","r");
 	for ( i=0;i<n;i++)
 	{
 		fscanf(filein_x0,"%f",&x[i]);
 	}
 	fclose(filein_x0); 
 	
 	//*******In ra 2 ma tran*********
 	printf("\nMa tran ve trai ban da nhap A ");
	printf("\n");
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%10.2f",a[i][j]);
		}
	printf("\n");
	}
	printf("\nMa tran ve phai ban da nhap B: \n");
	for ( i=0;i<n;i++)	
	{
		printf("%10.2f",b[i]);
		printf("\n");
	}
	printf("\n");
	
	//****In ra gia tri ban dau ****
	printf("\nGia tri ban dau cua x ban da nhap: \n");
	for ( i=0;i<n;i++)	
	{
		printf("%10.2f",x[i]);
		printf("\n");
	}
	printf("\n");
 	
 	
    //------ Nhap sai so epsilon. -------
    printf("\nNhap so epsilon:");
	scanf("%f",&epsi);
    
    //-----------GIAI HE PHUONG TRINH--------------------
	
   	FILE *fileout;
 	fileout=fopen("output.txt","w");
    printf("\nGia tri sau cac vong lap:\n");
    do
    {
    	dem+=1;
    	printf("Vong lap %d\n",dem);
        for (i = 0; i <n; i++)
        {
            y[i] = (b[i] / a[i][i]);
            for (j =0; j <n; j++)
            {
                if (j == i)
                    continue;
                y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];
            }
            printf("          x%d = %12.8f    ", i+1, y[i]);
            t=fabs(d-x[i]);
            d=x[i];
        }
        printf("\n"); 
		// Danh gia sai so theo cong thuc 19 SGK trang 71
    }while((t>epsi*fabs(x[dem])));
    
    fprintf(fileout,"Gia tri vong lap cuoi cung la\n");
    for (i = 0; i <n; i++)
    
    //*********Ghi ket qua vao file*******
    fprintf(fileout,"x%d = %10.8f    ", i+1, y[i]);
 	fclose(fileout); 
 	getch();
 	return 0;
 }
