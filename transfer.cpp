#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct tk_can_chuyen
{ char tk[50];
};
int main ()
{
	char tk_khac[50],c;
	char f[50];
	int n,tien_chuyen,so_du=20000;
	FILE *fp;
	struct tk_can_chuyen tk_chuyen[50];
	fp=fopen("D:\\offline games\\FILE HANDLING\\atm.txt","w");
	printf("so tai khoan toi da co the chuyen: ");
	scanf("%d",&n);
	fflush(stdin);
	for (int i=1;i<=n;i++)
	{ printf("tai khoan thu %d: ",i);
		gets(tk_chuyen[i].tk);
	}
	for (int i=1;i<=n;i++)
	fprintf(fp,"tai khoan %d: %s\n",i,tk_chuyen[i].tk);
	printf("nhap vao tai khoan ma ban muon chuyen: ");
	gets(tk_khac);
	for (int i=1; i<=n;i++)
	if ((strcmp(tk_khac,tk_chuyen[i].tk))==0) {printf("tai khoan nay ton tai moi ban nhap so tien muon chuyen: ");
	scanf("%d",&tien_chuyen);
		if (tien_chuyen <= so_du)
					{
						printf("Ban da chuyen %d thanh cong cho tai khoan %s\n",tien_chuyen,tk_chuyen[i].tk);
						so_du=so_du-tien_chuyen;
						printf("so du con lai la: %d",so_du);
						
					}
					while (tien_chuyen > so_du)
					{
						printf("\nso tien chuyen phai nho hon hoac bang so du con lai\n");
						printf("so tien hien tai la: %d\n",so_du);
						printf("vui long nhap lai so tien can chuyen: ");
						scanf("%d",&tien_chuyen);
						if (tien_chuyen <= so_du)
						{
							printf("Ban da chuyen %d thanh cong cho tai khoan %s\n",tien_chuyen,tk_chuyen[i].tk);
						so_du=so_du-tien_chuyen;
						printf("so du con lai la: %d",so_du);
						
						}
					}
	}
	fclose(fp);
	return 0;
}
