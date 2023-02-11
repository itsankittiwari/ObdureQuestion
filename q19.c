
/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/

#include <stdio.h>
void grading_system(int phy, int chem, int bio, int math, int comp)
{
    int Percentage = ((phy + chem + bio + math + comp) * 100 / 500);
    if (Percentage >= 90)
    {
        printf("Grade A");
    }
    else if (Percentage >= 80)
    {
        printf("Grade B");
    }
    else if (Percentage >= 70)
    {
        printf("Grade C");
    }
    else if (Percentage >= 60)
    {
        printf("Grade D");
    }
    else if (Percentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}

int main()
{
    int phy, chem, bio, math, comp;
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);

    grading_system(phy, chem, bio, math, comp);
}
