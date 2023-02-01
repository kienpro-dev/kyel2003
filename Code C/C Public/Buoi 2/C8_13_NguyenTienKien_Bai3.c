#include <stdio.h>

int main()
{
    int soHoa, soTien;
    printf("So hoa Hung muon mua:");
    scanf("%d", &soHoa);
    printf("So tien moi bong hoa:");
    scanf("%d", &soTien);
    if (soHoa >= 1 && soHoa <= 999 && soTien >= 7000 && soTien <= 200000 && soTien % 100 == 0)
    {
        int tongTien = soHoa * soTien;
        if (soHoa % 2 == 1 && soHoa > 5)
        {
            tongTien -= tongTien * 20 / 100;
        }
        else if (soHoa % 2 == 0 && soHoa > 4)
        {
            tongTien -= tongTien * 15 / 100;
        }
        printf("Tong so tien Hung phai tra la: %d", tongTien);
    }
    else
    {
        printf("Sai dieu kien du lieu de bai!!");
    }
}