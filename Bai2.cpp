#include <stdio.h>
#include <math.h>

int kiemTraSCP(int n);
int demSCP(int n);
void soChinhPhuong(int n);

int main(void)
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);

    int soCP = demSCP(n);
    printf("So luong so chinh phuong nho hon %d la: %d\n", n, soCP);

    soChinhPhuong(n);
    return 0;
}

void soChinhPhuong(int n)
{
    printf("Cac so chinh phuong nho hon %d la: ", n);
    for (int i = 1; i < n; i++)
    {
        if (kiemTraSCP(i))
        {
            printf("%d, ", i);
        }
    }
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