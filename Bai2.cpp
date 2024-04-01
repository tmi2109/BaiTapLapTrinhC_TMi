#include <stdio.h>
#include <math.h>

int kiemTraSCP(int n);
int demSCP(int n);

int main(void)
{
    int n;
    printf("Nhap so nguyen duong n: \n");
    scanf_s("%d", &n);

    int soChinhPhuong = demSCP(n);
    printf("So luong so chinh phuong nho hon %d la: %d\n", n, soChinhPhuong);

    return 0;
}

int kiemTraSCP(int n)
{
    int cbh = sqrt(n);
    return cbh * cbh == n;
}

int demSCP(int n)
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (kiemTraSCP(i))
        {
            dem++;
        }
    }
    return dem;
}