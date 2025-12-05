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
        printf("---Tim Uoc chung lon nhat va Boi chung nho nhat---\n");
        int x, y;
        printf("Nhap hai so x va y: ");
        scanf("%d %d", &x, &y);

        int min = (x < y) ? x : y; // nếu x < y thì min = x ngược lại min = y
        int max = (x > y) ? x : y;

        int ucln = 1;
        for (int i = min; i >= 1; i--) {
            if (x % i == 0 && y % i == 0) {
                ucln = i;
                break;
            }
        }

        int bcnn = max;
        while (1) {
            if (bcnn % x == 0 && bcnn % y == 0) {
                break;
            }
            bcnn++; // tăng bcnn lên 1 và kiểm tra lại
        }

        printf("UCLN cua 2 so vua nhap  = %d\n", ucln);
        printf("BCNN cua 2 so vua nhap = %d\n", bcnn);


        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
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
        printf("-----------Tinh tien Karaoke-----------\n");
        int gioBD, gioKT;
        printf("Nhap vao gio bat dau thue phong: ");
        scanf("%d", &gioBD);
        printf("Nhap vao gio ket thuc thue phong: ");
        scanf("%d", &gioKT);
        if (gioBD < 11 && gioKT > 24 && gioKT <= gioBD)
        {
            printf("So gio khong hop le, vui long nhap lai [12h->23h]\n");
            continue;
        }
        int soGioThue = gioKT - gioBD;
        int tienThue;
        if (soGioThue <= 3) {
            tienThue = 150000;
        }
        else {
            tienThue = 150000 + (soGioThue - 3) * (150000 * 10 / 100);
        }
        if (gioBD >= 14 && gioKT <= 17)
        {
            tienThue = tienThue - (tienThue * 10 / 100);
        }
        printf("So tien phai tra la: %d VND\n", tienThue);
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
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
        printf("nhap so dien da su dung: ");
        double soDien;
        scanf("%lf", &soDien);
        double tienDien;
        if (soDien <= 50) {
            tienDien = soDien * 1.678;
        }
        else if (soDien <= 100) {
            tienDien = 50 * 1.678 + (soDien - 50) * 1.734;
        }
        else if (soDien <= 200) {
            tienDien = 50 * 1.678 + 50 * 1.734 + (soDien - 100) * 2.014;
        }
        else if (soDien <= 300) {
            tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (soDien - 200) * 2.536;
        }
        else if (soDien <= 400) {
            tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (soDien - 300) * 2.834;
        }
        else {
            tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (soDien - 400) * 2.927;
        }
        printf("So tien dien phai tra la: %.3lf VND\n", tienDien);
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
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
        int soTien;

        printf("Nhap so tien can doi: ");
        scanf("%d", &soTien);
        int soTo;

        soTo = soTien / 500;
        printf("%d to 500\n", soTo);
        soTien = soTien % 500;

        soTo = soTien / 200;
        printf("%d to 200\n", soTo);
        soTien = soTien % 200;

        soTo = soTien / 100;
        printf("%d to 100\n", soTo);
        soTien = soTien % 100;

        soTo = soTien / 50;
        printf("%d to 50\n", soTo);
        soTien = soTien % 50;

        soTo = soTien / 20;
        printf("%d to 20\n", soTo);
        soTien = soTien % 20;

        soTo = soTien / 10;
        printf("%d to 10\n", soTo);
        soTien = soTien % 10;


        soTo = soTien / 5;
        printf("%d to 5\n", soTo);
        soTien = soTien % 5;


        soTo = soTien / 2;
        printf("%d to 2\n", soTo);
        soTien = soTien % 2;

        soTo = soTien / 1;
        printf("%d to 1\n", soTo);


        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
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
        printf("Lai xuat vay ngan hang, vay tra gop\n");
        double tienVay;
        double laiSuat = 0.05;
        int kyHan = 12;

        printf("Nhap so tien muon vay: ");
        scanf("%lf", &tienVay);

        double gocPhaiTraMoiThang = tienVay / kyHan;
        double tienConLai = tienVay - gocPhaiTraMoiThang;

        printf("\nKy han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai\n");

        for (int thang = 1; thang <= kyHan; thang++) {
            double lai = tienConLai * laiSuat;
            double tong = lai + gocPhaiTraMoiThang;

            tienConLai -= gocPhaiTraMoiThang;

            printf("%d\t%.0f\t\t%.0f\t\t%.0f\t\t\t%.0f\n",
                thang, lai, gocPhaiTraMoiThang, tong, tienConLai);
        }

        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
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
        float phanTramVay;
        float tongTien = 100000000;
        float laiThang = 12 / 7.2 / 100;
        int soThang = 24 * 12;

        printf("Nhap so %% vay toi da : ");
        scanf("%f", &phanTramVay);

        float soTienVay = tongTien * phanTramVay / 100;
        float traTruoc = tongTien - soTienVay;
        float gocMoiThang = soTienVay / soThang;
        float tienConNo = soTienVay;

        printf("\nSo tien tra lan dau: %.0f VND\n", traTruoc);
        printf("=== Bang tra gop 288 thang ===\n");
        printf("Thang\tSo tien phai tra hang thang\n");

        for (int i = 1; i <= soThang; i++) {
            float tienLai = tienConNo * laiThang;
            float tongThang = gocMoiThang + tienLai;
            tienConNo = tienConNo - gocMoiThang;

            printf("%d\t\t%.0f\n",
                i, tongThang);
        }
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void sxThongTinSinhVien()
{
    int luaChon;
    do
    {
        printf("Sap xep thong tin sinh vien\n");
        int n;
        printf("Nhap so sinh vien: ");
        scanf("%d", &n);

        char ten[100][50];
        float diem[10];
        char hocluc[100][20];


        for (int i = 0; i < n; i++) {
            printf("\nNhap ten sinh vien %d: ", i + 1);
            scanf("%s", ten[i]);

            printf("Nhap diem: ");
            scanf("%f", &diem[i]);

            if (diem[i] >= 9)
                sprintf(hocluc[i], "Xuat sac");
            else if (diem[i] >= 8)
                sprintf(hocluc[i], "Gioi");
            else if (diem[i] >= 6.5)
                sprintf(hocluc[i], "Kha");
            else if (diem[i] >= 5)
                sprintf(hocluc[i], "Trung binh");
            else
                sprintf(hocluc[i], "Yeu");
        }
        printf("\n===== Danh sach sinh vien =====\n");
        for (int i = 0; i < n; i++) {
            printf("Ten: %s - Diem: %.2f - Hoc luc: %s\n", ten[i], diem[i], hocluc[i]);
        }
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void gameFpoly()
{
    int luaChon;
    do
    {
        printf("Game FPOLY-LOTT\n");
        int so1, so2;
        int soTrung1, soTrung2;
        int dem = 0;
        printf("Moi nhap so thu nhat (1 - 15): ");
        scanf("%d", &so1);
        printf("Moi nhap so thu hai (1 - 15): ");
        scanf("%d", &so2);
        srand(time(NULL));
        soTrung1 = rand() % 15 + 1;
        soTrung2 = rand() % 15 + 1;
        printf("\nSo ban chon: %d - %d\n", so1, so2);
        printf("Giai nhat la : %d\n", soTrung1);
        printf("Giai nhi la : %d\n", soTrung2);
        if (so1 == soTrung1 || so1 == soTrung2) dem++;
        if (so2 == soTrung1 || so2 == soTrung2) dem++;
        if (dem == 0)
            printf("Chuc ban may man lan sau!\n");
        else if (dem == 1)
            printf("Chuc mung! Ban da trung giai NHI!\n");
        else
            printf("Chuc mung! Ban da trung giai NHAT!\n");

        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("---------------------------------------\n");
        if (luaChon != 1 && luaChon != 2)
        {
            printf("lua chon khong hop le vui long nhap lai\n");
        }

    } while (luaChon != 2);
}
void tinhPhanSo()
{
    int luaChon;
    do
    {
        printf("Tinh phan so\n");
        int tu1, mau1, tu2, mau2;
        printf("Nhap tu so va mau so phan so thu nhat: ");
        scanf("%d %d", &tu1, &mau1);
        printf("Nhap tu so va mau so phan so thu hai: ");
        scanf("%d %d", &tu2, &mau2);
        if (mau1 == 0 || mau2 == 0)
        {
            printf("Mau so khong hop le, vui long nhap lai\n");
            continue;
        }
        double congPhanSo = (tu1 / mau1) + (tu2 / mau2);
        double truPhanSo = (tu1 / mau1) - (tu2 / mau2);
        double nhanPhanSo = (tu1 / mau1) * (tu2 / mau2);
        double chiaPhanSo = (tu1 / mau1) * (mau2 / tu2);

        printf("Tong hai phan so: %.2lf\n", congPhanSo);
        printf("Hieu hai phan so: %.2lf\n", truPhanSo);
        printf("Tich hai phan so: %.2lf\n", nhanPhanSo);
        printf("Thuong hai phan so: %.2lf\n", chiaPhanSo);
        printf("1: tiep tuc truong trinh\n");
        printf("2: quay lai menu\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
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
            sxThongTinSinhVien();
            break;
        case 9:
            gameFpoly();
            break;
        case 10:
            tinhPhanSo();
            break;
        default:
            printf("lua chon khong hop le, vui long nhap lai\n");
            break;
        }
    } while (chon != 0);
}