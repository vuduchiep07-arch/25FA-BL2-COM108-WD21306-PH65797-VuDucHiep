#include <stdio.h>
#include <math.h>

void kiemTraSoNguyen()
{
    int luaChon;
    do
    {
        printf("Kiem tra so nguyen\n");
		int n;  
		printf("Nhap so can kiem tra:\n ");
		scanf_s("%d", &n);
		if (n == (int)n)
		{
			printf("%d la so nguyen\n", n);
		}
        else

        {
            printf("%d khong phai la so nguyen\n", n);
        }
        printf("Kiem tra so nguyen to\n");
		int i, soNgTo = 0;
		if (n <= 1)
		{
			printf("%d khong phai la so nguyen to\n", n);
		}
		else
		{
			for (i = 2; i <= sqrt(n); i++)
			{
				if (n % i == 0)
				{
					soNgTo = 1;
					break;
				}
			}
			if (soNgTo == 0)
			{
				printf("%d la so nguyen to\n", n);
			}
			else
			{
				printf("%d khong phai la so nguyen to\n", n);
			}
		}
		printf( "Kiem tra so chinh phuong\n");
		int sqrt_n = (int)sqrt(n);
		if (sqrt_n * sqrt_n == n)
		{
			printf("%d la so chinh phuong\n", n);
            }
        else
        {
            printf("%d khong phai la so chinh phuong\n", n);
		}

        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban:\n ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void timUocChungVaBoiChung()
{
    int luaChon;
    do
    {
        printf("Tim Uoc chung va Boi chung\n");
		printf("Nhap hai so nguyen a va b:\n ");
		int a, b;
		scanf_s("%d %d", &a, &b);
		int original_a = a;
		int original_b = b;
		while (b != 0)
		{
			int temp = b;
			b = a % b;
			a = temp;
		}
		int uoc_chung = a;
		int boi_chung = (original_a * original_b) / uoc_chung;
		printf("Uoc chung lon nhat cua %d va %d la: %d\n", original_a, original_b, uoc_chung);
		printf("Boi chung nho nhat cua %d va %d la: %d\n", original_a, original_b, boi_chung);
            
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void tinhTienKaraoke()
{
    int luaChon;
    do
    {
        printf("Tinh tien Karaoke\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void tinhTienDien()
{
    int luaChon;
    do
    {
        printf("Tinh tien dien\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void chucNangDoiTien()
{
    int luaChon;
    do
    {
        printf("Chuc nang doi tien\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void vayNganHangVayTraGop()
{
    int luaChon;
    do
    {
        printf("Vay ngan hang,vay tra gop\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void vayTienMuaXe()
{
    int luaChon;
    do
    {
        printf("Vay tien mua xe\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void ttSinhVien()
{
    int luaChon;
    do
    {
        printf("TT sinh vien\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void chucNangChin()
{
    int luaChon;
    do
    {
        printf("Game FPOLY_LOTT (2/15)\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void chucNangMuoi()
{
    int luaChon;
    do
    {
        printf("Toan phan so\n");
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf_s("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
int main()
{
    int chon;
    int luaChon;
    do
    {
        printf("Menu chuong trinh\n");
        printf("1.Kiem tra so nguyen\n");
        printf("2.Tim Uoc chung va Boi chung\n");
        printf("3.Tinh tien Karaoke\n");
        printf("4.Tinh tien dien\n");
        printf("5.Chuc nang doi tien\n");
        printf("6.Vay ngan hang,vay tra gop\n");
        printf("7.Vay tien mua xe\n");
        printf("8.TT sinh vien\n");
        printf("9.Game FPOLY_LOTT (2/15)\n");
        printf("10.Toan phan so\n");
        printf("0.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf_s("%d", &chon);
        switch (chon)
        {
        case 1:
            kiemTraSoNguyen();
            break;
        case 2:
            timUocChungVaBoiChung();
            break;
        case 3:
            tinhTienKaraoke();
            break;
        case 4:
            tinhTienDien();
            break;
        case 5:
            chucNangDoiTien();
            break;
        case 6:
            vayNganHangVayTraGop();
            break;
        case 7:
            vayTienMuaXe();
            break;
        case 8:
            ttSinhVien();
            break;
        case 9:
            chucNangChin();
            break;
        case 10:
            chucNangMuoi();
            break;
        default:
            printf("lua chon khong hop le, vui long nhap lai\n");
            break;
        }
    } while (chon != 0);
}