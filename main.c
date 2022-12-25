/*******************************************************************************
 * Include
 ******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include "sum.h"
#include "sub.h"

/*******************************************************************************
 * Code
 ******************************************************************************/
int main(void)
{
    uint8_t u_sum = 0;
    uint8_t u_sub = 0;
    uint8_t u_tb = 0;
    uint8_t u_a1 = 0;
    uint8_t u_a2 = 0;

    printf("Nhap a1 = ");
    scanf("%d", &u_a1);
    printf("Nhap a2 = ");
    scanf("%d", &u_a2);
    u_sub = sub(u_a1, u_a2);
    u_sum = sum(u_a1, u_a2);
    u_tb = (u_a1 + u_a2) / 2;
    printf("Trung binh cong cua %d va %d la: %d\n", u_a1, u_a2, u_tb);
    printf("Tong cua %d va %d la: %d\n", u_a1, u_a2, u_sum);
    printf("Hieu cua %d va %d la %d", u_a1, u_a2, u_sub);

    return 0;
}

/*******************************************************************************
 * END
 ******************************************************************************/