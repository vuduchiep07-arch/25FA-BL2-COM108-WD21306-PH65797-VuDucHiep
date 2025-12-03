#include <stdio.h>
void timSoNGuyen()
{
    int so;
    printf("nhap so nguyen: ");
    scanf_s("%d", &so);
    if (so >= 0)
    {
        printf("%d la so nguyen duong\n", so);
    }
    else
    {
        printf("%d la so nguyen am\n", so);
    }
}
void mang2Chieu()
{
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("nhap phan tu thu [%d][%d]: ", i, j);
            scanf_s("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
void string()
{ 
    char name[50] = { "Hiep" };
  while (getchar() != '\n');
    printf("nhap ten: ");
    fgets(name, sizeof(name), stdin);
    printf(" %s", name);
  //Một bản khác(  // string
    //char name[10] = "Anh";
    //get(name); > fgets();

    //for ( int i = 0; i < 3; i++)
    //{
    //    scanf_s(" %c", &name[i]);
	//}
    // suat du lieu = for = printf
   // for (int i = 0; i < 3; i++)
   // {
   //     printf("%c", name[i]);
  //  }
   // printf("\n");
    //puts(name)     )
}
void lapChucNang(int chonChucNang)
    { 
        int tiepTuc = 1;
        while (tiepTuc == 1)
        {
            switch (chonChucNang)
            {
            case 1:
                timSoNGuyen();
                break;
            case 2:
				mang2Chieu();
                break;
            case 3:
				string();
                break;
            case 0:
                return;
            default:
                printf("chon lai [0-3]");
                break;

            }
            printf("tiep tuc chuc nang nay? [1:co/0:khong]");
            scanf_s("%d", &tiepTuc);
            system("cls");
        }
    }
int main()
{
    int chonChucNang;


    do
    {
        printf("menu\n");
        printf("1. Kiem Tra so nguyen \n");
        printf("2. mang 2 chieu\n");
        printf("3.String \n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");
        printf("menu\n");

        scanf_s("%d", &chonChucNang);
        lapChucNang(chonChucNang);

    } while (chonChucNang != 0);
}